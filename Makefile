INC_DIR	:= include
SRC_DIR	:= src
OBJ_DIR	:= object

CC	:= g++
CPPFLAGS 	= -I$(INC_DIR) -MMD -MP -g
CXXFLAGS	:= -Wall 

SOURCES	:= $(wildcard $(SRC_DIR)/*.cpp)
OBJECTS	:= $(SOURCES:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
DEPS	:= $(wildcard $(OBJ_DIR)/*.d)

main: $(OBJECTS)
	$(CC) -std=c++14 $(LDFLAGS) $(LIBLOC) $^ $(LDLIBS) -o $@

$(OBJECTS): $(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) -std=c++14 $(CXXFLAGS) $(CPPFLAGS) -c $(OUTPUT_OPTION) $<

clean: ; $(RM) $(DEPS) $(OBJECTS)

include $(DEPS)

$(MAKEFILE_LIST): ;
%:: %,v
%:: RCS/%,v
%:: RCS/%
%:: s.%
%:: SCCS/s.%

