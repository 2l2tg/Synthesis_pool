/*
** EPITECH PROJECT, 2019
** display2
** File description:
** piscine synthèse
*/

#include "../include/my.h"

void loop_check(char *str, int i)
{
    while (i >= 0) {
        if (str[i] == 'G' || str[i] == 'g') {
            str[i] = 'C';
            printf("%c", str[i]);
        }
        else if (str[i] == 'A' || str[i] == 'a') {
            str[i] = 'T';
            printf("%c", str[i]);
        }
        else if (str[i] == 'T' || str[i] == 't') {
            str[i] = 'A';
            printf("%c", str[i]);
        }
        else if (str[i] == 'C' || str[i] == 'c') {
            str[i] = 'G';
            printf("%c", str[i]);
        }
        i--;
    }
}

void display_check3(char *str)
{
    int i = 0;

    while (str[i]) {
        i++;
    }
    loop_check(str, i);
}

void display_av3(char **av)
{
    printf("%s\n", av[0]);
    for (int i = 1; av[i]; i++) {
        if (av[i][0] != '>')
            display_check3(av[i]);
        if (av[i][0] == '>')
            printf("\n%s\n", av[i]);
    }
    printf("\n");
}
