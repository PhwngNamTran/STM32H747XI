# Declare phony targets to avoid conflicts with file names
.PHONY: all cm7 cm4 clean clean_cm4 clean_cm7

# Target to build both CM7 and CM4 configurations
all: cm7 cm4

# Target to clean both CM7 and CM4 configurations
clean: clean_cm7 clean_cm4

# Target to build CM7 configuration
cm7:
	@echo "Start building CM7"
	$(MAKE) -f Makefile_cm7 cm7
	@echo "CM7 has been built successfully !"

# Target to build CM4 configuration
cm4:
	@echo "Start building CM4"
	$(MAKE) -f Makefile_cm4 cm4
	@echo "CM4 has been built successfully !"

# Target to clean CM7 configurations
clean_cm7:
	$(MAKE) -f Makefile_cm7 clean

# Target to clean CM4 configurations
clean_cm4:
	$(MAKE) -f Makefile_cm4 clean
