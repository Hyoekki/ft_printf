# Makefile for the 'src' directory of the 'ft_printf' library.

# Variables
CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
LIBFT = libft/libft.a
SRC = src/ft_printf.c \
	src/handle_d.c \
	src/handle_percent.c \
	src/handle_s.c \
	src/handle_u.c \
	src/handle_x.c \
	src/handle_capital_x.c \
	src/handle_p.c \
	src/handle_c.c
OBJS = $(SRC:.c=.o)
LDFLAGS = `pkg-config --cflags --libs check`

# Detect OS and adjust compiler
UNAME := $(shell uname)

# macOS
ifeq ($(UNAME), Darwin)
	CC = clang
endif

# Rules

# Ensure libft.a is built before building libftprintf.a
$(LIBFT):
	make -C libft

# Rule to build the target library, depends on libft.a
$(NAME): $(OBJS) $(LIBFT)
	ar rcs $(NAME) $(OBJS)

# Rule to build the object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# All rule to build the entire library
all: $(NAME)

# Rule to run the tests, links against both libftprintf.a and libft.a
test: $(NAME) $(LIBFT)
	$(CC) $(CFLAGS) -o tests/test_suite tests/test_ft_printf.c $(NAME) $(LIBFT) $(LDFLAGS)
	./tests/test_suite

# Rule to clean the object files
clean:
	rm -f $(OBJS)
	rm -f tests/test_suite
	make -C libft clean

# Rule to clean the object files and the library
fclean: clean
	rm -f $(NAME)
	make -C libft fclean

# Rule to clean and rebuild the library
re: fclean all

# Phony targets
.PHONY: all clean fclean re test
