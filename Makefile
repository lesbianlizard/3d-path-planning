# Arguments for external commands
CXX = g++
CXXFLAGS += -Wall -I include
RMFLAGS = -vfr

# File extensions
EXT_OBJ = .o
EXT_CXX = .cpp
EXT_HXX = .hpp

# Directory names
OBJ_DIR = obj
INCLUDE_DIR = include
BIN_DIR = bin
SRC_DIR = src

# Array of all source and object files, not yet used
SRC_FILES := $(wildcard $(INCLUDE_DIR)/*.cpp)
OBJ_FILES := $(patsubst $(INCLUDE_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRC_FILES))

# Creates directories for binary and object files
$(info $(shell mkdir -pv $(BIN_DIR)/tests $(OBJ_DIR)))

# Implicit target to generate object files
$(OBJ_DIR)/%$(EXT_OBJ): $(INCLUDE_DIR)/%$(EXT_CXX)
	$(CXX) -c $(CXXFLAGS) $< -o $@

tests/test_position: $(SRC_DIR)/tests/test_position.cpp $(OBJ_DIR)/position.o
	$(CXX) $(CXXFLAGS) $^ -o $(BIN_DIR)/$@

tests/test_vertex: $(SRC_DIR)/tests/test_vertex.cpp $(OBJ_DIR)/vertex.o $(OBJ_DIR)/position.o
	$(CXX) $(CXXFLAGS) $^ -o $(BIN_DIR)/$@

tests: tests/test_position tests/test_vertex

clean:
	rm $(RMFLAGS) $(BIN_DIR)/* $(OBJ_DIR)/*


# vim : noexpandtab
