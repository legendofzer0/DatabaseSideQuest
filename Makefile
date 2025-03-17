CC = gcc
CFLAGS = -Wall -g
SRC = InputBuffer.c MetaCommand.c PreparedStatement.c PrintPrompt.c REPL.c Statement.c
OBJ = $(SRC:.c=.o)
TARGET = app.exe

# Default target
all: $(TARGET)

# Rule to build the executable
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

# Rule to compile each .c file into .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rule to remove generated files
clean:
	rm -f $(OBJ) $(TARGET)
