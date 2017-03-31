NAME = libft.a

FLAGS = -Wall -Werror -Wextra

CC = gcc

SRC = *.c

OBJ = $(SRC:.c=.o)

$(NAME):
	$(CC) $(FLAGS) -c $(SRC) 
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
