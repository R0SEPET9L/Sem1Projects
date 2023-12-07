/*
** EPITECH PROJECT, 2023
** scientific nb
** File description:
** printf
*/

#include "my.h"

static int put_float(int nb, long double flt)
{
    int flint = flt;
    int j = 0;

    j += print_nbr(flint);
    j += print_char('.');
    for (int i = 0 ; i < nb ; i++) {
        flt -= flint;
        flt = flt * 10;
        flint = flt;
        j += print_nbr(flint);
    }
    return j;
}

static int push_float(int nb, double flt)
{
    long double precision = flt;
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

int print_scient(double nb, int precision, char e)
{
    int i = 0;
    int bytes = 0;

    if (nb < 0.) {
        bytes += print_char('-');
        nb = -nb;
    }
    if (nb == 0.)
        return push_float(precision, nb);
    for (i; nb >= 10.; i++)
        nb = nb / 10.;
    for (i; nb < 1.; i--)
        nb = nb * 10.;
    bytes = push_float(precision, nb);
    bytes += print_char(e);
    if (i > 0)
        bytes += print_char('+');
    if (i < 10)
        bytes += print_char('0');
    return (bytes + print_nbr(i));
}
