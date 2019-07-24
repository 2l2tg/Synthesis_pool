/*
** EPITECH PROJECT, 2019
** check
** File description:
** piscine synthèse
*/

#include "../include/my.h"
#include "../include/struct.h"

list_t *new_list(void *val)
{
    list_t *list;

    list = malloc(sizeof(list_t));
    list->val= val;
    list->next = 0;
    list->past = 0;
    return (list);
}

list_t *list_get_firstelem(list_t *list)
{
    if (list == 0)
        return (0);
    while (list->past != 0)
        list = list->past;
    return (list);
}

list_t *list_get_lastelem(list_t *list)
{
    if (list == 0)
        return (0);
    while (list->next != 0)
        list = list->next;
    return (list);
}

list_t *list_addbot(list_t *list, void *val)
{
    list_t *tmp;

    if (list == 0)
        return (new_list(val));
    tmp = list_get_lastelem(list);
    tmp->next = new_list(val);
    tmp->next->past = tmp;
    return (list);
}

list_t *list_erase(list_t *list)
{
    list_t *tmp = 0;

    if (list == 0)
        return (0);
    tmp = list->past;
    tmp->next = list->next;
    if (list->next != 0)
        list->next->past = tmp;
    free(list->val);
    free(list);
    return (tmp);
}
