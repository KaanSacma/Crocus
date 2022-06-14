##
## EPITECH PROJECT, 2022
## file
## File description:
## make
##

CC = 	gcc

SRC =	src/main.c	\
	src/print_nb1.c	\
	src/print_nb2.c	\
	src/print_char_nb.c	\
	src/error_handle.c

OBJ = $(SRC:.c=.o)

CFLAGS = -Werror -Wextra -Wall -I./include

NAME = crocus

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all
