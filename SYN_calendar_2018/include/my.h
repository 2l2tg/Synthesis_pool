/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** piscine synthèse
*/

#ifndef MY_H_
#define MY_H_

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <dirent.h>
#include "struct.h"

/*fuction_base*/
/*basics.c*/
char *my_strcpy (char *dest, char *src);
int my_putchar(char c);
int my_putstr(char  *str);
int my_strlen(char *str);

/*change_str.c */
char *my_realoc(char *src);
int count_word_split(char const *str, char split);
void boucle_split(char const *str, char **result, char split);
char **split(char const *str, char split);

/*mod_malloc.c*/
char *my_ralloc(char *str, int *s_max);
char *add_char(char *str, int *s, int *s_max, char c);
char *read_line(int fd);

/*my_malloc.c*/
void *my_malloc(size_t size);
char **my_realoc_double(char **src);

/*my_stock.c*/
employee_t *stock_empl(char *tmp);
meeting_t *stock_meet(char *tmp);


/*main.c*/
int main(int, char **);

#endif /*MY_H_*/
