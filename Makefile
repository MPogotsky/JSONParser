SOURCE_DIR := ./src
INCLUDE_DIR := ./include
BINARY_DIR := ./bin

CC := g++ -D_GLIBCXX_USE_CXX11_ABI=0 -g -o $(BINARY_DIR)/JSONParser

all:
	@echo "Building..."
	$(CC) $(SOURCE_DIR)/*.cpp -I $(INCLUDE_DIR)
	@echo "Done."
