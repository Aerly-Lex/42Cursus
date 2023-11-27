NAME = push_swap

CC = cc

FLAGS = -Wall -Werror -Wextra

OBJ = $(SRC:.c=.o)

SRC =
#		$(shell find . -name '*.c')

$(NAME): $(OBJ)
	ar rcs $(NAME)

all: $(NAME)

clean:
	@rm -f *.o

fclean: clean
	@echo $(NAME) deleted

re: fclean all

.PHONY: all clean fclean re
