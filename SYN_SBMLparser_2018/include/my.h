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


/*fuction_base*/
/*basics.c*/
int my_putchar(char);
int my_putstr(char  *);
int my_strlen(char *);
int my_put_nbr(int);

/*basics2.c*/
int my_compute_power_rec(int, int);
int my_isneg(int);
char *my_strcat(char *, char const *);
char *my_strncat(char *, const char *, int);
char *my_strncpy(char *, char const *, int);

/*my_help.c*/
void my_help(void);

/*open_file.c*/
char **open_file(char *);
void my_free(FILE *, char *);
char **sbmlparser(char *);

/*sbmlparseur.c*/
char **sbmlparser2(char *);
char **sbmlparser3(char *);
char **sbmlparser4(char *);
char **sbmlparser5(char *);
char **sbmlparser6(char *);

/*str_to_wordtab.c*/
int isalpha_num(char);
char **size_str(char const *);
char **my_str_to_word_tab(char const *);

/*main.c*/
int display_parse(int, char **);
int main(int, char **);

#endif /*MY_H_*/
