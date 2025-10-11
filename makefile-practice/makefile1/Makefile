# Target name
TARGET = hello

# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -g

# Source files
SRC = src/hello.c

# Object files
OBJ = $(SRC:.c=.o)

# Default target
all: $(TARGET)

# Linking
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

# Compile .c -> .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean build files
clean:
	rm -f $(OBJ) $(TARGET)


