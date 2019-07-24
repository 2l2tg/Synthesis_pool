##
## EPITECH PROJECT, 2019
## makefile
## File description:
## piscine synthèse
##

NAME	=	calendar

SRC	=	src/main.c              \
                src/basics.c            \
                src/change_str.c        \
                src/mod_malloc.c        \
                src/my_malloc.c         \
                src/my_stock.c          \
                src/prep_list.c         \
                src/prep_list2.c        

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Iinclude -g

all: 	$(MAKE)

$(MAKE):	$(OBJ)
	gcc -Wall -Wextra -W -g3 -o $(NAME) $(OBJ) -g

clean:
	rm -f $(OBJ)

fclean: clean


re: fclean all