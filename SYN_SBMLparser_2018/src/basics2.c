/*
** EPITECH PROJECT, 2019
** basics2
** File description:
** piscine
*/

#include "../include/my.h"

int my_compute_power_rec(int nb, int power)
{
    if (power == 0) {
        return (1);
    }
    if (power < 0) {
        return (0);
    }
    if (power > 1) {
        power = power - 1;
        nb = nb * my_compute_power_rec(nb, power);
    }
    return (nb);
}

char *my_strcat(char *dest, char const *src)
{
	int i;
	int n;
	int dest_n = 0;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
        dest[dest_n + i] = src[i];
    dest[dest_n + i] = '\0';
    return (dest);
}

char *my_strncat(char *dest, const char *src, int nb)
{
    int dest_n = 0;
    int i;

    for (i = 0 ; i < nb && src[i] != '\0' ; i++)
        dest[dest_n + i] = src[i];
    dest[dest_n + i] = '\0';
    return (dest);
}

char *my_strncpy(char *dest, char const *src, int n)
{
	n = 0;

	while (src[n] != '\0') {
		dest[n] = src[n];
        n++;
	}
	return (dest);
}