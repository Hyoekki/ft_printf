CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = libftprintf.a

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a
SRC_DIR = src
INC_DIR = include

SRC = $(SRC_DIR)/ft_printf.c \
	$(SRC_DIR)/handle_c.c \
	$(SRC_DIR)/handle_capital_x.c \
	$(SRC_DIR)/handle_d.c \
	$(SRC_DIR)/handle_p.c \
	$(SRC_DIR)/handle_percent.c \
	$(SRC_DIR)/handle_s.c \
	$(SRC_DIR)/handle_u.c \
	$(SRC_DIR)/handle_x.c \

OBJ = $(SRC:.c=.o)

INC = -I$(INC_DIR) -I$(LIBFT_DIR)/include

all: $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

%.o: %.c
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

$(NAME): $(LIBFT) $(OBJ)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJ)

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -rf $(OBJ)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
