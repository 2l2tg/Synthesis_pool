/*
** EPITECH PROJECT, 2019
** my_convert
** File description:
** piscine synthèse
*/

#include "../include/my.h"

int	convert_tobase10(char *str, int base)
{
    int	res;
    int	x;
    int	len;
    int	i;
    int	b;

    len = strlen(str);
    res = (b = 0);
    while (--len >= 0 && ++b) {
        x = 1;
        i = -1;
        while (++i < b - 1)
            x *= base;
        res += x * (str[len] - '0');
    }
    return (res);
}

char *base10_convert(int str, int base)
{
    char *res;
    int	cpy;
    int	len;

    cpy = str;
    len = 0;
    while (++len && (cpy /= base));
    if (!(res = malloc(sizeof(char) * (len + 1))))
        return (NULL);
    if (!str)
        res[0] = '0';
    res[len] = 0;
    while (str) {
        res[--len] = str % base + '0';
        str /= base;
    }
    return (res);
}
