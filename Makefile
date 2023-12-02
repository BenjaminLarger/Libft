SRC = $(wildcard ft_*.c)
OBJ = $(SRC:%.c=%.o)
NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	$(RM) $(wildcard $(OBJ))

fclean: clean
	$(RM) $(NAME)

re: fclean all