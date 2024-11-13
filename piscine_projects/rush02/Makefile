# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Executable name
NAME = rush-02

# Source files
SRC = main.c dictionary.c library1.c library.c validity.c word_converting.c

# Object files
OBJ = $(SRC:.c=.o)

# Rules
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

# Compile source files to object files
%.o: %.c rush.h
	$(CC) $(CFLAGS) -c $< -o $@

# Clean object files
clean:
	rm -f $(OBJ)

# Clean executable and object files
fclean: clean
	rm -f $(NAME)

# Rebuild the project
re: fclean all

.PHONY: all clean fclean re
