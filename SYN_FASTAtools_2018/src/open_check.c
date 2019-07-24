/*
** EPITECH PROJECT, 2019
** open_check
** File description:
** piscine synthèse
*/

#include "../include/my.h"

char **file_open(void)
{
    int x = 0;
    char *file = NULL;
    char **res = malloc(sizeof(char *) * 10000);
    size_t len = 0;
    ssize_t read;

    while ((read = getline(&file, &len, stdin)) != -1) {
        del_space(file);
        res[x] = strdup(file);
        x++;
    }
    res[x] = NULL;
    return (res);
}
