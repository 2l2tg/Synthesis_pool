/*
** EPITECH PROJECT, 2019
** palindrome
** File description:
** piscine synthèse
*/

#include "../include/my.h"

int check_palind(char *str)
{
    int x = 0;
    int i = strlen(str) - 1;

    while (i > x) {
        if (str[x++] != str[i--])
            return (0);
    } return (1);
}

int check_iteration(char *str)
{
    char *res = malloc(sizeof(char) * 100);
    int x = atoi(res);
    int i = 0;

    sprintf(res, "%s", str);
    while (check_palind(res) != 1) {
        x = atoi(res) + atoi(revstr(res));
        sprintf(res, "%d", x);
        i++;
    }
    if (check_palind(str) == 1) {
        printf("%d leads to %d in %d", atoi(str), atoi(str), i);
        printf(" iteration(s) in base 10\n");
        exit (0);
    }
    if (check_palind(res) == 1) {
        printf("%d leads to %d in %d", atoi(str), x, i );
        printf(" iteration(s) in base 10\n");
    }
    return (0);
}

int flag_pal(char *str)
{
    char *res = malloc(sizeof(char) * 100);
    int a = atoi(res);
    int x = 0;

    sprintf(res, "%s", str);
    while (x == 0) {
        a = atoi(res) + atoi(revstr(res));
        sprintf(res, "%d", x);
        x++;
    }
        if (check_palind(res) == 1) {
        printf("%d leads to %d in %d", atoi(str), a, x);
        printf(" iteration(s) in base 10\n");
    }
    return (0);
}
