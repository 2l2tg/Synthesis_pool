##
## EPITECH PROJECT, 2019
## makefile
## File description:
## piscine synthèse
##

NAME	=	FASTAtools

SRC	=	src/main.c		\
                src/my_help.c           \
                src/open_check.c        \
                src/change_str.c        \
                src/display.c           \
                src/display2.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Iinclude -g

all: 	$(MAKE)

$(MAKE):	$(OBJ)
	gcc -Wall -Wextra -W -g3 -o $(NAME) $(OBJ) -g

clean:
	rm -f $(OBJ)

fclean: clean


re: fclean all
