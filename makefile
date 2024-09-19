# Define the compiler to use
CC = gcc

# Define the compiler flags
CC_FLAGS = -g -pedantic -W -Wall

# List of source files
FILES = student_grade.c

# Name of the output executable
OUT_EXE = a

# Default target to build the executable
all: $(OUT_EXE)

# Rule to build the executable from the source files
$(OUT_EXE): $(FILES)
	$(CC) $(CC_FLAGS) -o $(OUT_EXE) $(FILES)

# Rule to clean up the build artifacts
clean:
	rm -f *.o core *~ $(OUT_EXE)

# Rule to clean and then rebuild the project
rebuild: clean all

# Declare the targets that are not actual files
.PHONY: all clean rebuild