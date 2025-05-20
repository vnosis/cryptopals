# Compiler settings
CXX := g++
CXXFLAGS := -std=c++17 -Wall -Iinclude

# Directories
SRC_DIR := src
ENCODER_DIR := encoders
INCLUDE_DIR := include
BUILD_DIR := build

# Source files
SRC_FILES := $(wildcard $(SRC_DIR)/*.cpp)
ENCODER_FILES := $(wildcard $(ENCODER_DIR)/*.cpp)
ALL_SRCS := $(SRC_FILES) $(ENCODER_FILES)

# Object files
OBJS := $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(SRC_FILES)) \
        $(patsubst $(ENCODER_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(ENCODER_FILES))

# Target binary
TARGET := app

# Default target
all: $(TARGET)

# Link
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

# Compile rules
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(BUILD_DIR)/%.o: $(ENCODER_DIR)/%.cpp
	mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean rule
clean:
	rm -rf $(BUILD_DIR) $(TARGET)