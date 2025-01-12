# Declare phony targets to avoid conflicts with file names
.PHONY: all CM7 CM4 clean clean_cm4 clean_cm7

# Target to build both CM7 and CM4 configurations
all: CM7 CM4

# Target to clean both CM7 and CM4 configurations
clean: clean_cm7 clean_cm4

# Target to build CM7 configuration
CM7:
	@echo "Start building CM7"
	$(MAKE) -f Makefile_CM7 CM7
	@echo "CM7 has been built successfully !"

# Target to build CM4 configuration
CM4:
	@echo "Start building CM4"
	$(MAKE) -f Makefile_CM4 CM4
	@echo "CM4 has been built successfully !"

# Target to clean CM7 configurations
clean_cm7:
	$(MAKE) -f Makefile_CM7 clean

# Target to clean CM4 configurations
clean_cm4:
	$(MAKE) -f Makefile_CM4 clean
