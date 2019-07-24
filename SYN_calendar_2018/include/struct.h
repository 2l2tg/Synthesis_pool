/*
** EPITECH PROJECT, 2019
** struct
** File description:
** piscine synthèse
*/

#ifndef STRUCT_H_
#define STRUCT_H_

typedef struct employee_s
{
    char *id;
    char *first_n;
    char *last_n;
    char *job;
    char *codezip;
} employee_t;

typedef struct meeting_s
{
    char *id;
    char *day;
    char *codezip;
} meeting_t;

typedef struct  list_s
{
    void *val;
    struct list_s *next;
    struct list_s *past;
}list_t;

list_t *new_list(void *);
list_t *list_get_firstelem(list_t *);
list_t *list_get_lastelem(list_t *);
list_t *list_addbot(list_t *, void *);
list_t *list_erase(list_t *);
int list_size(list_t *);
void list_destroy(list_t *);
void list_clear(list_t *);

#endif
