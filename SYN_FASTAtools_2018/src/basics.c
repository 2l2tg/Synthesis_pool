/*
** EPITECH PROJECT, 2019
** basics
** File description:
** piscine synthèse
*/

#include "../include/my.h"

char *revstr(char *str)
{
    char *res = malloc(sizeof(char) * (strlen(str) - 1));
    int a = strlen(str) - 1;
    int b = 0;

    res[strlen(str)] = '\0';
    while (a != -1) {
        res[b] = str[a];
        b++;
        a--;
    } return (res);
}

int my_putchar(char c)
{
    write (1, &c, 1);
}

int my_putstr(char  *str)
{
    int i = 0;

    while (!(str[i] == '\0')) {
        my_putchar(str[i]);
        i = i + 1;
    }
    return (0);
}

int my_strlen(char *str)
{
    int i = 0;

    while (!( str[i] == '\0')) {
        i = i + 1;
    }
    return (i);
}