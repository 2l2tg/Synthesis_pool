/*
** EPITECH PROJECT, 2019
** basics
** File description:
** piscine synthèse
*/


#include "../include/my.h"

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

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb >= 10) {
        my_put_nbr(nb / 10);
    }
    my_putchar (48 + (nb % 10));
    return (0);
}