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

typedef struct pal_t pal_t;
typedef struct pal_t {
    int p;
	int n;
	int b;
	int imin;
	int imax;
}pal_t;

/*fuction_base*/
/*basics.c*/
char *revstr(char *);

/*my_help.c*/
int my_help(void);

/*my_errors.c*/
void init_value(pal_t *);
int my_error(int, char **);

/*palindrome.c*/
int check_palind(char *);
int check_iteration(char *);
int flag_pal(char *);

/*main.c*/
int check_flags(int, char **, pal_t *);
int main(int, char **);

#endif /*MY_H_*/
