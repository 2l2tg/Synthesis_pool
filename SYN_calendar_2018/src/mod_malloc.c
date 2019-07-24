/*
** EPITECH PROJECT, 2019
** mod_malloc
** File description:
** piscine synthèse
*/

#include "../include/my.h"
#include "../include/struct.h"

char *my_ralloc(char *str, int *s_max)
{
    char *tmp = malloc(*s_max * 2 + 1);
    int i = -1;

    while (++i < *s_max)
        tmp[i] = str[i];
    *s_max = *s_max * 2 + 1;
    free(str);
    return (tmp);
}

char *add_char(char *str, int *s, int *s_max, char c)
{
    if (*s == *s_max)
        str = my_ralloc(str, s_max);
    str[*s] = c;
    *s = *s + 1;
    return (str);
}

char *read_line(int fd)
{
    char c;
    char *str = malloc(4);
    int s = 0;
    int s_max = 4;

    while (1) {
        if (read(fd, &c, 1) > 0) {
            if (c == '\n')
                return (add_char(str, &s, &s_max, '\0'));
            else
                str = add_char(str, &s, &s_max, c);
        } else {
            free(str);
            return (0);
        }
    }
}
