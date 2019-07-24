/*
** EPITECH PROJECT, 2019
** requirement
** File description:
** piscine synthèse
*/

#include <stdlib.h>
#include <stdio.h>

int isalpha_num(char c)
{
    int num = c >= '0' && c <= '9';
    int min = c >= 'a' && c <= 'z';
    int maj = c >= 'A' && c <= 'Z';

    if (num || min || maj)
        return (0);
    return (1);
}

char **size_str(char const *str)
{
    char **res;
    int i = 0;
    int x = 0;
    int s = 2;

    while (str[i]) {
        if (isalpha_num(str[i]) == 0)
            s++;
        i++;
    }
    i = 0;
    res = malloc(sizeof(char *) * (s));
    while (str[i] != '\0') {
        while (str[i] != '\0' && (isalpha_num(str[i]) == 0)) {
            i++;
        }
        res[x] = malloc(sizeof(char) * (i + 1));
        x++;
        if (str[i] != '\0')
            i++;
        else
            break;
    } return (res);
}

char **my_str_to_word_array_synthesis(char const *str)
{
    char **res = size_str(str);
    int x = 0;
    int y = 0;
    int i = 0;

    while (str[i] != 0 && (!isalpha_num(str[i]) == 0))
        i++;
    while (str[i] != '\0') {
        while (str[i] != '\0' && (isalpha_num(str[i]) == 0)) {
            res[x][y++] = str[i++];
        }
        res[x][y] = '\0';
        y = 0;
        x++;
        while (str[i] != 0 && (!isalpha_num(str[i]) == 0))
            i++;
    }
    res[x] = NULL;
    return (res);
}

/*int main(int ac, char **av)
{
    char **tab = my_str_to_word_array_synthesis(av[1]);
    for (int i = 0; tab[i]; i++)
        printf("%s\n", tab[i]);
    return (0);
}*/