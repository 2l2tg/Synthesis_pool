##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## solo_stumper3
##


NAME	=	SBMLparser

SRC	=	src/main.c		\
		src/str_to_wordtab.c	\
                src/sbmlparseur.c       \
                src/basics.c            \
                src/basics2.c            \
                src/open_file.c         \
                src/my_help.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Iinclude -g

all: 	$(MAKE)

$(MAKE):	$(OBJ)
	gcc -Wall -Wextra -W -g3 -o $(NAME) $(OBJ) -g

clean:
	rm -f $(OBJ)

fclean: clean


re: fclean all
