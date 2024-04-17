##
## EPITECH PROJECT, 2022
## my_sokoban.c
## File description:
## my_sokoban
##

SRC		=	src/*.c \
			lib/*.c

OBJ		=	$(SRC:.c=.o)

NAME	=	my_sokoban

ncurses	=	-lncurses

all	:	$(NAME)

$(NAME)	:
	gcc $(SRC) -Wall -Wextra -I include -o $(NAME) -g3  $(ncurses)

clean	:
	rm -f $(OBJ)

fclean	:	clean
	rm -f $(NAME)

re	    :	fclean all
