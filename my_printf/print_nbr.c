/*
** EPITECH PROJECT, 2023
** My put nbr
** File description:
** task07
*/

#include "my.h"

static int test_nbr(int nb)
{
    int j = 0;

    if (nb == 0)
        j += print_char(48);
    if (nb == -2147483648) {
        j += print_char(50);
        j += print_nbr(147483648);
    }
    return j;
}

int print_nbr(int nb)
{
    long p;
    int j = 0;

    if (nb < 0) {
        p = nb * (-1);
        j += print_char(45);
    } else
        p = nb;
    j += test_nbr(nb);
    if (p > 0 && p < 10) {
        j += print_char(p + 48);
    }
    if (p > 9) {
        j += print_nbr(p / 10);
        j += print_char(p % 10 + 48);
    }
    return j;
}
