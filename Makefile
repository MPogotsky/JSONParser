
CC := g++ -D_GLIBCXX_USE_CXX11_ABI=0 -g -o JSONParser
SOURCE_DIR := ./src
INCLUDE_DIR := -I $(SOURCE_DIR)/Parser
all:
	$(CC) $(SOURCE_DIR)/main.cpp $(SOURCE_DIR)/Parser/Parser.cpp $(INCLUDE_DIR)
