/*
** EPITECH PROJECT, 2019
** main
** File description:
** piscine synthèse
*/

#include "../include/my.h"

int display_parse(int ac, char **av)
{
    int y = 0;
    char **check = sbmlparser(av[1]);
    char **check2 = sbmlparser2(av[1]);
    char **check3 = sbmlparser3(av[1]);
    char **check4 = sbmlparser4(av[1]);
    char **check5 = sbmlparser5(av[1]);
    char **check6 = sbmlparser6(av[1]);

    if (!check)
        return (84);
    for (y = 0; check[y]; y++) {
        printf("%s", *check);
        printf("%s", *check2);
        printf("%s", *check3);
        printf("%s", *check4);
        printf("%s", *check5);
        printf("%s", *check6);
    }
    return (0);
}

int main(int ac, char **av)
{
    int err;

    if (ac < 2)
        return (84);
    if ((err = open(av[1], O_RDONLY)) == -1)
        return (84);
    else 
        display_parse(ac, av);
    if (strcmp(av[1], "-h") == 0) {
        my_help();
        return (0);
    } else if (strcmp(av[1], "-i") == 0) {
        return (0);
    } 
    return (0);
}