# Compiler and Flags
CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -Iinclude

# Directories
SRC_DIR = src
BUILD_DIR = build
BIN_DIR = bin
TEST_DIR = tests
TEST_BIN_DIR = $(TEST_DIR)/bin

# Files
MAIN_SRC = $(SRC_DIR)/main.c
ALL_SRCS = $(wildcard $(SRC_DIR)/*.c)
APP_SRCS = $(filter-out $(MAIN_SRC), $(ALL_SRCS))

# Object files
MAIN_OBJ = $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%.o, $(MAIN_SRC))
APP_OBJS = $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%.o, $(APP_SRCS))

# Executable target
TARGET = $(BIN_DIR)/{{ cookiecutter.project_name | replace("-", "_") }}

# Test source files and test binaries
TEST_SRCS = $(wildcard $(TEST_DIR)/*.c)
TEST_BINS = $(patsubst $(TEST_DIR)/%.c, $(TEST_BIN_DIR)/%, $(TEST_SRCS))

# Default build target
all: $(TARGET)

# Build the final executable
$(TARGET): $(MAIN_OBJ) $(APP_OBJS) | $(BIN_DIR)
	$(CC) $(CFLAGS) -o $@ $^

# Compile source-files to object files
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c -o $@ $<

# Build test-binaries without main.c, link with Criterion
$(TEST_BIN_DIR)/%: $(TEST_DIR)/%.c $(APP_OBJS) | $(TEST_BIN_DIR)
	$(CC) $(CFLAGS) -o $@ $< $(APP_OBJS) -lcriterion

# Create build directories if needed
$(BUILD_DIR):
	mkdir -p $@

$(BIN_DIR):
	mkdir -p $@

$(TEST_BIN_DIR):
	mkdir -p $@

# Run all tests (Criterion handles output)
test: all $(TEST_BINS)
	@for test in $(TEST_BINS); do \
		echo "Running $$test"; \
		./$$test || exit 1; \
	done

# Clean all generated files
clean:
	rm -rf $(BUILD_DIR) $(BIN_DIR) $(TEST_BIN_DIR)

.PHONY: all clean test
