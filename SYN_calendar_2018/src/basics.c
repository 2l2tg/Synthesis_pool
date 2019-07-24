/*
** EPITECH PROJECT, 2019
** basics
** File description:
** piscine synthèse
*/

#include "../include/my.h"

char *my_strcpy (char *dest, char *src)
{
    int x = 0;

    dest = malloc(sizeof(char) * my_strlen(src) + 1);
    while (src[x] != '\0') {
        dest[x] = src[x];
        x++;
    }
    dest[x] = src[x];
    return (dest);
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