/*
** EPITECH PROJECT, 2019
** requirement
** File description:
** piscine synthèse
*/

int my_factrec_synthesis(int nb)
{
    if (nb < 0 || nb > 12)
        return (0);
    if (nb <= 1)
        return (1);
    return (nb * my_factrec_synthesis(nb - 1));
}

int my_squareroot_synthesis(int nb)
{
    int *res = malloc(sizeof(int) + nb);
    int a = 0;

    if (nb == 0)
        return (0);
    if (nb < 0)
        return (-1);
    for (int x = 1; x <= nb; x++) {
        if ((nb % x) == 0) {
            res[a] = x;
            a++;
        }
    } a = 0;
    for (int y = 0; res[y]; y++) {
        if ((res[y] * res[y]) == nb) {
            a = res[y];
            free(res);
            return (a);
        }
    } free(res);
    return (-1);
}