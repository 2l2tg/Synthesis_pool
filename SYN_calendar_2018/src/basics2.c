/*
** EPITECH PROJECT, 2019
** basics2
** File description:
** piscine
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

char *my_strcat(char *dest, char const *src)
{
    int i;
    int n;
    int dest_n = 0;

    for (i = 0 ; i < n && src[i] != '\0' ; i++)
        dest[dest_n + i] = src[i];
    dest[dest_n + i] = '\0';
    return (dest);
}

char *my_strncat(char *dest, const char *src, int nb)
{
    int dest_n = 0;
    int i;

    for (i = 0 ; i < nb && src[i] != '\0' ; i++)
        dest[dest_n + i] = src[i];
    dest[dest_n + i] = '\0';
    return (dest);
}

char *my_strncpy(char *dest, char const *src, int n)
{
    n = 0;

    while (src[n] != '\0') {
        dest[n] = src[n];
        n++;
    }
    return (dest);
}