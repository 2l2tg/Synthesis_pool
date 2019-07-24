/*
** EPITECH PROJECT, 2019
** flags
** File description:
** piscine synthèse
*/

#include "../include/my.h"

char **get_names(char **str)
{
    char *tab = open_file(str);
    int x = 0;
    int y = 0;

    while (str[x] != '\0') {
        while (str[x][y] != '\n') {

        }
        y++;
    }
    x++;
}

char check_names(char **str)
{
    char *id = "id=";
    char *name = "name=";
    char *species = "species=";

    strcmp(id, str);
    strcmp(name, str);
    strcmp(species, str);
}