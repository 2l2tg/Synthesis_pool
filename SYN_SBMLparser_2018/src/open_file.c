/*
** EPITECH PROJECT, 2019
** open_check
** File description:
** piscine synthèse
*/

#include "../include/my.h"

char **open_file(char *file)
{
    FILE *fd = fopen(file, "r");
    char *res = NULL;
    size_t f = 100;
    char **tab = NULL;
    int x = 0;

    while (getline(&res, &f, fd) != -1)
        x++;
    tab = malloc(sizeof(char *) * (x + 2));
    x = 0;
    fseek(fd, 0, SEEK_SET);
    if (fd != NULL) {
        while (getline(&res, &f, fd) != -1) {
            tab[x] = malloc(sizeof(char *) * (strlen(res)));
                strcpy(tab[x], res);
                x++;
        }
    } tab[x] = NULL;
    my_free(fd, res);
    return (tab);
}

void my_free(FILE *close, char *res)
{
    fclose(close);
    free(res);
}

char **sbmlparser(char *str)
{
    char **res = open_file(str);
    int i = 0;
    char **tab = NULL;
    int len1;
    int len2 = strlen("compartment");

    while (res[i]) {
        for (int x = 0; res[i][x]; x++) {
            len1 = strlen(&res[i][x]);
            if (strncmp(&res[i][x], "compartment", len1
                        < len2 ? len1 : len2) == 0) {
                tab = my_str_to_word_tab(res[i]);
                printf("%s\n", "compartment");
                printf("%s\n", "----->id\n----->name");
                return (NULL);
            }
        }
        i++;
    } return (0);
}