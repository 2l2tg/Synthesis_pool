/*
** EPITECH PROJECT, 2019
** malloc
** File description:
** piscine synthèse
*/

#include "../include/my.h"
#include "../include/struct.h"

void *my_malloc(size_t size)
{
    void *result = NULL;

    result = malloc(size);
    if (result == NULL)
        return (NULL);
    if (memset(result, 0, size) != result) {
        free(result);
        return (NULL);
    }
    return (result);
}

char **my_realoc_double(char **src)
{
    char **result = NULL;
    int len = 0;

    if (src == NULL)
        len = 2;
    else
        for (len = 0; src[len] != NULL; len = len + 1);
    result = my_malloc(sizeof(char *) * (len + 2));
    if (src != NULL) {
        for (int i = 0; src[i] != NULL; i = i + 1)
            result[i] = src[i];
        free(src);
    }
    result[len] = NULL;
    result[len + 1] = NULL;
    return (result);
}
