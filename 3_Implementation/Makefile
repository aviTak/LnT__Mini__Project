# Output Files
BUILD = build
PROJECT_NAME = Library

# All test source files

SRC = src\delete.c src\insert.c \
src\main.c src\menu.c src\printlink.c src\search1.c src\search2.c \

TEST_SRC = src\delete.c src\insert.c \
src\main.c src\menu.c src\printlink.c src\search1.c src\search2.c \
test/library_test.c \
unity/unity.c\

ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif


TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).$(EXEC)

# All include folders with header files
INC	= -Iinc\
-Iunity

#Library Inlcudes
#if working with CUnit 
#INCLUDE_LIBS = -lcunit

#INCLUDE_LIBS =

# Project Output name
PROJECT_OUTPUT = $(PROJECT_NAME).$(EXEC)

# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc $(call FixPath,$(SRC)) $(INC) -o $(call FixPath,$(BUILD)/$(PROJECT_NAME).$(EXEC))

# Call `make run` to run the application
run: all
	$(call FixPath,$(BUILD)/$(PROJECT_NAME).$(EXEC))

# Document the code using Doxygen
doc:
	make -C ./documentation

# Build and run the unit tests

test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT)
	$(call FixPath,$(BUILD)/$(TEST_OUTPUT).$(EXEC))

#Coverage
coverageCheck:$(BUILD)
	g++ -fprofile-arcs -ftest-coverage -fPIC -O0 $(TEST_SRC) $(INC) -o $(TEST_OUTPUT)
	$(call FixPath,$(BUILD)/$(TEST_OUTPUT).$(EXEC))

# Create new build folder if not present
$(BUILD):
	mkdir build

# Remove all the built files, invoke by `make clean`
clean:
	$(RM) $(call FixPath,$(BUILD)/*)
	rmdir $(BUILD)