/*
** EPITECH PROJECT, 2019
** my_help
** File description:
** piscine synthèse
*/

#include "../include/my.h"

void my_help(void)
{
    printf("USAGE\n      ./SBMLparser SBMLfile [-i ID [-e]] [-json]\n\n");
    printf("DESCRIPTION\n      SBMLfile    SBML file\n");
    printf("      -i ID       id of compartement, ");
    printf("reaction or product to");
    printf("be extracted\n                  (igniored if");
    printf("uncorrect)\n");
    printf("      -e          print the equation if a r");
    printf("eaction ID is given");
    printf(" as argument\n                  (ignored otherwise)\n");
    printf("      -json       transform the file into a JSON file\n");
}