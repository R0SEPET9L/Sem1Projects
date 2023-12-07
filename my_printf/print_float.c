/*
** EPITECH PROJECT, 2023
** print float
** File description:
** print a float with precision
*/

#include "my.h"

static int put_float(int nb, double flt)
{
    int flint = flt;
    int j = 0;

    j += print_nbr(flint);
    if (nb > 0)
        j += print_char('.');
    for (int i = 0 ; i < nb ; i++) {
        flt -= flint;
        flt = flt * 10;
        flint = flt;
        j += print_nbr(flint);
    }
    return j;
}

int print_float(int nb, double flt)
{
    double precision = flt;
    long long remove_int = 0;
    float float_part;
    int j = 0;

    if (precision < 0.) {
        precision = -1 * precision;
        j += print_char('-');
    }
    for (int i = 0; i < nb; i++)
        precision = precision * 10;
    remove_int = precision;
    float_part = precision - remove_int;
    if (float_part > 0.5)
        precision += 1;
    for (int i = 0; i < nb; i++)
        precision = precision / 10.;
    return j + put_float(nb, precision);
}
