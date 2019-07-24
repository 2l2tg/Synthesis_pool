/*
** EPITECH PROJECT, 2019
** display
** File description:
** piscine synthèse
*/

#include "../include/my.h"

void display_check(char *str)
{
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            printf("%c", str[i] - 32);
        if (str[i] == 'A' || str[i] == 'T'
            || str[i] == 'C'
            || str[i] == 'G')
            printf("%c", str[i]);
    }
}

void display_av(char **av)
{
    printf("%s\n", av[0]);
    for (int i = 1; av[i]; i++) {
        if (av[i][0] != '>')
            display_check(av[i]);
        else if (av[i][0] == '>')
            printf("\n%s\n", av[i]);
    }
    printf("\n");
}

void display_check2(char *c)
{
    int i = 0;

    while (c[i]) {
        if ((c[i] >= 'a' && c[i] <= 'z') && c[i] != 't')
            printf("%c", c[i] - 32);
        if (c[i] == 'A' || c[i] == 'C'
            || c[i] == 'G')
            printf("%c", c[i]);
        if (c[i] == 'T' || c[i] == 't') {
            c[i] = 'U';
            printf("%c", c[i]);
        }
        i++;
    }
}

void display_av2(char **av)
{
    printf("%s\n", av[0]);
    for (int i = 1; av[i]; i++) {
        if (av[i][0] != '>')
            display_check2(av[i]);
        if (av[i][0] == '>')
            printf("\n%s\n", av[i]);
    }
    printf("\n");
}
