import os
import json

# Find source and header files dynamically
def find_files(ext, directories):
    files = []
    for directory in directories:
        for root, _, filenames in os.walk(directory):
            files.extend(os.path.join(root, f) for f in filenames if f.endswith(ext))
    return files

# Project-specific configurations
cm7_dir = "CM7"
common_dir = "Drivers"
build_dir = "_out/CM7"
directories = [cm7_dir, common_dir]

c_sources = find_files(".c", directories)
include_dirs = list(set(os.path.dirname(f) for f in find_files(".h", directories)))
compiler = "arm-none-eabi-gcc"
flags = [
    "-mcpu=cortex-m7",
    "-mthumb",
    "-Wall",
    "-g",
    "-fmessage-length=0",
    "--specs=nosys.specs",
]

# Generate compile_commands.json
commands = []
for src in c_sources:
    obj_file = os.path.join(build_dir, os.path.basename(src).replace(".c", ".o"))
    command = {
        "directory": os.getcwd(),
        "command": f"{compiler} -c {' '.join(flags)} {' '.join(f'-I{d}' for d in include_dirs)} {src} -o {obj_file}",
        "file": src,
    }
    commands.append(command)

# Write to compile_commands.json
with open("compile_commands.json", "w") as f:
    json.dump(commands, f, indent=2)

print("compile_commands.json generated!")
