/*
** EPITECH PROJECT, 2019
** requirement.c
** File description:
** piscine synthèse
*/

#include <stdio.h>
#include <stdlib.h>
#include "requirement.h"

int my_revlist_synthesis(list_t **begin)
{
    list_t *first = *begin;
    list_t *before = NULL;
    list_t *next = NULL;

    while (first !=  NULL) {
        next = first->next;
        first->next = before;
        before = first;
        first = next;
    }
    *begin = before;
    return (0);
}

list_t *my_findnodeeqinlist_synthesis(list_t *begin, void *data_ref,
				int (*cmp) ( void *, void *))
{
    list_t *first = begin;

    while (first != NULL && cmp(data_ref, first->data) != 0)
        first = first->next;
    return (first);
}