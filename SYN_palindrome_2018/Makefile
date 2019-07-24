##
## EPITECH PROJECT, 2019
## makefile
## File description:
## piscine synthèse
##

NAME	=	palindrome

SRC	=	src/main.c		\
                src/my_help.c		\
		src/palindrome.c	\
		src/basics.c		\
		src/my_errors.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Iinclude -g

all: 	$(MAKE)

$(MAKE):	$(OBJ)
	gcc -Wall -Wextra -W -g3 -o $(NAME) $(OBJ) -g

clean:
	rm -f $(OBJ)

fclean: clean


re: fclean all