/*
** EPITECH PROJECT, 2019
** check_list
** File description:
** piscine synthèse
*/

#include "../include/my.h"
#include "../include/struct.h"

employee_t *stock_empl(char *tmp)
{
    employee_t *emp = malloc(sizeof(employee_t) * 10000);
    char **tab_info = NULL;

    tab_info = split(tmp, ' ');
    emp->first_n = tab_info[1];
    emp->last_n = tab_info[2];
    emp->job = tab_info[3];
    emp->codezip = tab_info[4];
    emp->id = tab_info[5];
    printf("******************************\n");
    printf("%s %s\n", emp->last_n, emp->first_n);
    printf("position: %s\n", emp->job);
    printf("city: %s\n", emp->codezip);
    free(tab_info);
    free(emp);
}

meeting_t *stock_meet(char *tmp)
{
    meeting_t *meet = malloc(sizeof(meeting_t) * 10000);
    char **tab_meet = NULL;

    tab_meet = split(tmp, ' ');
    meet->codezip = tab_meet[1];
    meet->day = tab_meet[2];
    meet->id = tab_meet[3];
    printf("******************************\n");
    printf("MEETING\n");
    printf("place: %s\n", meet->codezip);
    printf("date: %s\n", meet->day);
    printf("with %s\n", meet->id);
    free(tab_meet);
    free(meet);

}
