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

/*fuction_base*/
/*my_help.c*/
void my_help(void);
void my_help2(void);

/*change_str.c*/
char *del_space(char *);
char *capitalize(char *);
char *delete_space(char *);
char *delete_line(char *);
int find_space(char *, int);

/*open_check.c*/
char **file_open();
char *replace_let(char *, char, char);

/*display.c*/
void display_check(char *);
void display_av(char **);
void display_check2(char *);
void display_av2(char **);

/*display2.c*/
void change_letter(char *);
void display_check3(char *);
void display_av3(char **);

/*main.c*/
int main(int, char **);

#endif /*MY_H_*/
