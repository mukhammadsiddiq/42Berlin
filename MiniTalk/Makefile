# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/07 11:59:46 by mukibrok          #+#    #+#              #
#    Updated: 2024/12/07 12:14:18 by mukibrok         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Executables
SERVER = server
CLIENT = client

# Directories
FT_PRINTF_DIR = ft_printf
FT_PRINTF_LIB = $(FT_PRINTF_DIR)/libftprintf.a

# Sources
SERVER_SRC = server.c
CLIENT_SRC = client.c

# Object files
SERVER_OBJ = $(SERVER_SRC:.c=.o)
CLIENT_OBJ = $(CLIENT_SRC:.c=.o)

# Rules
all: $(FT_PRINTF_LIB) $(SERVER) $(CLIENT)

# Build the server
$(SERVER): $(SERVER_OBJ) $(FT_PRINTF_LIB)
	@$(CC) $(CFLAGS) $(SERVER_OBJ) $(FT_PRINTF_LIB) -o $(SERVER)
	@echo "\033[0;32mServer compiled successfully!\033[0m"

# Build the client
$(CLIENT): $(CLIENT_OBJ) $(FT_PRINTF_LIB)
	@$(CC) $(CFLAGS) $(CLIENT_OBJ) $(FT_PRINTF_LIB) -o $(CLIENT)
	@echo "\033[0;32mClient compiled successfully!\033[0m"

# Compile ft_printf library
$(FT_PRINTF_LIB):
	@$(MAKE) -C $(FT_PRINTF_DIR)
	@echo "\033[0;32mft_printf library built successfully!\033[0m"

# Clean up object files in the main directory
clean:
	@$(RM) $(SERVER_OBJ) $(CLIENT_OBJ)
	@$(MAKE) -C $(FT_PRINTF_DIR) clean
	@echo "\033[0;33mMain project object files removed!\033[0m"

# Remove all generated files
fclean: clean
	@$(RM) $(SERVER) $(CLIENT)
	@$(MAKE) -C $(FT_PRINTF_DIR) fclean
	@echo "\033[0;33mAll project files removed!\033[0m"

# Rebuild everything
re: fclean all

# PHONY targets
.PHONY: all clean fclean re
