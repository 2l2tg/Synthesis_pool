/*
** EPITECH PROJECT, 2019
** main
** File description:
** piscine synthèse
*/

#include "../include/my.h"

int check_flags(int ac, char **av, pal_t *palind)
{
    if (strcmp(av[1], "-h") == 0)
        my_help();
    if (strcmp(av[1], "-n") == 0)
        check_iteration(av[2]);
    if (strcmp(av[1], "-p") == 0)
        flag_pal(av[2]);
}

int main(int ac, char **av)
{
    pal_t palind;

    init_value(&palind);
    if (ac < 2  || ac > 10  || ac % 2 == 0) {
        return (84);
    }
    if (check_flags(ac, av, &palind) != 0)
        return (84);
}