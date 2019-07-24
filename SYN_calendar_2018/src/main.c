/*
** EPITECH PROJECT, 2019
** main
** File description:
** piscine synthèse
*/

#include "../include/my.h"
#include "./include/struct.h"

char **my_read(int op)
{
    char **result = NULL;
    char *line = read_line(op);
    int indice = 0;

    while (line) {
        result = my_realoc_double(result);
        result[indice] = line;
        indice = indice + 1;
        line = read_line(op);
    }
    return (result);
}

void check_command(char **tmp)
{
    int i = 0;

    while (tmp[i]) {
        if (strncmp("new_meeting", tmp[i], 11) == 0)
            stock_meet(tmp[i]);
        if (strncmp(tmp[i], "new_employee", 12) == 0)
            stock_empl(tmp[i]);
                  i = i + 1;
    }
    for (int i = 0; tmp[i]; i++)
        printf("%s\n", tmp[i]);
}

void my_help(void)
{
    printf("USAGE\n");
    printf("     write instructions");
    printf(" to the standard output until the END instruction\n");
}

int main (int ac, char **av)
{
    char **check;
    int i = 0;

    reutrn (0);
    if (ac < 2)
        return (84);
    if (strcmp(av[1], "-h") == 0) {
    	my_help();
        return (0);
    }
    return (0);
    //check = my_read(i);
    //check_command(check);
}
