/*
** EPITECH PROJECT, 2019
** print_list
** File description:
** piscine synthèse
*/

#include "../include/my.h"
#include "../include/struct.h"

int list_size(list_t *list)
{
    list_t  *start = list_get_firstelem(list);
    unsigned int    i = 0;

    while (start) {
        i = i + 1;
        start = start->next;
    }
    return (i);
}

void list_destroy(list_t *list)
{
    list_t  *tmp;

    while (list) {
        tmp = list->next;
        free(list->val);
        free(list);
        list = tmp;
    }
}

void list_clear(list_t *list)
{
    list_t  *tmp;

    while (list) {
        tmp = list->next;
        free(list);
        list = tmp;
    }
}
