/*
** EPITECH PROJECT, 2019
** change_str
** File description:
** pisicne synthèse
*/

#include "../include/my.h"

char *del_space(char *str)
{
    for (int i = 0; str[i]; i++)
        if (str[i] == '\n')
            str[i] = '\0';
    return (str);
}

int find_space(char *file, int i)
{
    while (file[i] != '\n')
        i = i + 1;
    return (i + 1);
}

char *capitalize(char *file)
{
    int x = 0;

    while (file[x]) {
        if (file[x] >= 'a' && file[x] <= 'z')
            file[x] = file[x] - 32;
        x = x + 1;
    }
    return (file);
}

char *delete_space(char *file)
{
    char *tmp = NULL;
    int x = 0;
    int y = 0;

    tmp = malloc(sizeof(char) * (strlen(file)));
    while (file[x]) {
        if (file[x] == ' ' || file[x] == '\n') {
            x = x + 1;
            continue;
        }
        tmp[y] = file[x];
        y = y + 1;
        x = x + 1;
    }
    tmp[y] = '\0';
    return (tmp);
}

char *delete_line(char *file)
{
    int x = 0;

    while (file[x]) {
        if (x > 0 && file[x] == '>')
            file[x - 1] = '\n';
        if (file[x] == '>')
            x = find_space(file, x);
        if (file[x] == '\n')
            file[x] = ' ';
        x = x + 1;
    }
    return (file);
}
