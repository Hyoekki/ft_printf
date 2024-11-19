# Makefile for the 'src' directory of the 'ft_printf' library.

# Variables
CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRC =
OBJS = $(SRC:.c=.o)

# Rules
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Rule to build the object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to build the entire library
all: $(NAME)

# Rule to clean the object files
clean:
	rm -f $(OBJS)

# Rule to clean the object files and the library
fclean: clean
	rm -f $(NAME)

# Rule to clean the object files, the library, and rebuild the library
re: fclean all

# Phony targets
.PHONY: all clean fclean re
