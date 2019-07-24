/*
** EPITECH PROJECT, 2019
** requirement
** File description:
** piscine synthèse
*/

#include <stdio.h>

char *my_strcapitalize_synthesis(char *str)
{
    int x = 0;

    for (int y = 0; str[y]; y++) {
        if (str[y] >= 'A' && str[y] <= 'Z')
            str[y] = str[y] + 32;
    }
    if (str[0] >= 97 && str[0] <= 122)
        str[0] = str[0] - 32;
    while (str[x] != '\0') {
        if (str[x - 1] >= 21 && str[x - 1] <= 47
            || str[x - 1] >= 91 && str[x - 1] <= 96
            || str[x - 1] >= 123 && str[x - 1] <= 127)
            if (str[x] <= 'z' && str[x] >= 'a')
                str[x] = str[x] - 32;
        x = x + 1;
    }
    return (str);
}
