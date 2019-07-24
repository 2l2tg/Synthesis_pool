/*
** EPITECH PROJECT, 2019
** sbmlparseur
** File description:
** piscine synthèse
*/

#include "../include/my.h"

char **sbmlparser2(char *str)
{
    char **res = open_file(str);
    int i = 0;
    char **stwa = NULL;
    int t2 = strlen("model");
    int t1;

    while (res[i]) {
        for (int x = 0; res[i][x]; x++) {
            t1 = strlen(&res[i][x]);
            if (strncmp(&res[i][x], "model", t1
                        < t2 ? t1 : t2) == 0) {
                stwa = my_str_to_word_tab(res[i]);
                printf("%s\n", "model");
                printf("%s\n", "----->id\n----->name");
                return (NULL);
            }
        }
        i++;
    } return (0);
}

char **sbmlparser3(char *str)
{
    char **res = open_file(str);
    int i = 0;
    char **stwa = NULL;
    int t2 = strlen("reaction");
    int t1;

    while (res[i]) {
        for (int x = 0; res[i][x]; x++) {
            t1 = strlen(&res[i][x]);
            if (strncmp(&res[i][x], "reaction", t1
                        < t2 ? t1 : t2) == 0) {
                stwa = my_str_to_word_tab(res[i]);
                printf("%s\n", "reaction");
                printf("%s\n", "----->compartment");
                printf("%s\n", "----->id\n----->name");
                printf("%s\n", "----->reversible");
                return (NULL);
            }
        }
        i++;
    } return (0);
}

char **sbmlparser4(char *str)
{
    char **res = open_file(str);
    int i = 0;
    char **stwa = NULL;
    int t2 = strlen("sbml");
    int t1;

    while (res[i]) {
        for (int x = 0; res[i][x]; x++) {
            t1 = strlen(&res[i][x]);
            if (strncmp(&res[i][x], "sbml", t1
                        < t2 ? t1 : t2) == 0) {
                stwa = my_str_to_word_tab(res[i]);
                printf("%s\n", "sbml");
                printf("%s\n", "----->level\n----->version");
                printf("%s\n", "----->xmlns");
                return (NULL);
            }
        }
        i++;
    } return (0);
}

char **sbmlparser5(char *str)
{
    char **res = open_file(str);
    int i = 0;
    char **stwa = NULL;
    int t2 = strlen("species");
    int t1;

    while (res[i]) {
        for (int x = 0; res[i][x]; x++) {
            t1 = strlen(&res[i][x]);
                if (strncmp(&res[i][x], "species", t1
                        < t2 ? t1 : t2) == 0) {
                    stwa = my_str_to_word_tab(res[i]);
                    printf("%s\n", "species");
                    printf("%s\n", "----->compartment\n----->id");
                    printf("%s\n", "----->name");
                    return (NULL);
                }
        }
        i++;
    } return (0);
}

char **sbmlparser6(char *str)
{
    char **res = open_file(str);
    int i = 0;
    char **stwa = NULL;
    int t2 = strlen("speciesReference");
    int t1;

    while (res[i]) {
        for (int x = 0; res[i][x]; x++) {
            t1 = strlen(&res[i][x]);
            if (strncmp(&res[i][x], "speciesReference", t1
                        < t2 ? t1 : t2) == 0) {
                stwa = my_str_to_word_tab(res[i]);
                printf("%s\n", "speciesReference");
                printf("%s\n", "----->species\n----->stoichiometry");
                return (NULL);
            }
        }
        i++;
    } return (0);
}