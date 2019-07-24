/*
** EPITECH PROJECT, 2019
** main
** File description:
** piscine synthèse
*/

#include "../include/my.h"

int check_int(int ac, char **av)
{
    char **res;

    res = file_open(av);
    if (av[1][0] == '1')
        display_av(res);
    if (av[1][0] == '2')
        display_av2(res);
    if (av[1][0] == '3')
        display_av3(res);
}

int is_nbr(char *c)
{
    int num = c >= "0" && c <= "9";

    if (num)
        return (0);
    return (1);
}

int my_error(int ac, char **av)
{
    if (ac > 3 || ac < 1)
        exit (84);
    if (av[1][0] == '4') {
        if (ac < 3)
            exit (84);
        if (is_nbr(av[2]) != 0)
            exit (84);
    }
    if (atoi(av[1]) > 7 || atoi(av[1]) < 1)
        exit (84);
}

int main (int ac, char **av)
{
    char **res;

    if (av[1] == NULL)
        return (84);
    my_error(ac, av);
    if (strcmp(av[1], "-h") == 0) {
        my_help();
    }
    if (ac > 1) {
        check_int(ac, av);
    }
}