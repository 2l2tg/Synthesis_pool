/*
** EPITECH PROJECT, 2019
** my_help
** File description:
** piscine synthèse
*/

#include "../include/my.h"

void my_help(void)
{
    printf("USAGE\n");
    printf("      ./FASTAtools option\n\n");
    printf("DESCRIPTION\n");
    printf("      option 1: read FASTA from the standard input,");
    printf(" write the DNA sequences to the\n");
    printf("                standard output\n");
    printf("      option 2: read FASTA from the standard input,");
    printf(" write the RNA sequences to the\n");
    printf("                standard output\n");
    printf("      option 3: read FASTA from the standard input,");
    printf("write the reverse complement\n");
    printf("                to the standard output\n");
    printf("      option 4: read FASTA from the standard input,");
    printf(" write the k-mer list to the\n");
    printf("                standars output\n");
    printf("      option 5: read FASTA from the standard input,");
    printf(" write the coding sequences\n");
    my_help2();
}

void my_help2(void)
{
    printf("                list to the standard output\n");
    printf("      option 6: read FASTA from the standard input,");
    printf("write the amino acids list to\n");
    printf("                the standard output\n");
    printf("      option 7: read FASTA from the standard input");
    printf("containing exactly 2 squences,\n");
    printf("                align them and write the result");
    printf("to the standard output\n");
    printf("      k: size of the k-mers for option 4\n");
}
