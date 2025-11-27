NAME = libftprintf.a

CC = cc

CFLAGS = -g -Wall -Werror -Wextra -I include

SRC = src/ft_putchar.c\
	  src/ft_putstr.c\
	  src/ft_putnbr_base.c\
	  src/ft_strlen.c\
	  src/ft_format.c\
	  src/ft_printf.c\
	  src/ft_print_char.c\
	  src/ft_print_str.c\
	  src/ft_print_ptr.c\
	  src/ft_print_nbr.c\
	  src/ft_print_hex.c\
	  src/ft_print_unsigned.c\
	  src/ft_print_percent.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) 
		ar -rcs $(NAME) $^

%.o: %.c
		$(CC) $(CFLAGS) $(HEADER) -c $< -o $@

clean:
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
