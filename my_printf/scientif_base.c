/*
** EPITECH PROJECT, 2023
** My printf
** File description:
** Scientif Convert base
*/

#include "my.h"

static int print_signed_nbr(int nb)
{
    if (nb >= 0) {
        print_char('+');
        return 1 + print_nbr(nb);
    }
    return print_nbr(nb);
}

static int print_float_base(double nb, char *base, int precision)
{
    unsigned int int_nb = nb;
    int j = 0;
    int k = 0;
    int comp = 16.;

    j += print_char(base[int_nb]);
    if (precision > 0)
        j += print_char('.');
    nb -= int_nb;
    for (int i = 0; i < precision; i++) {
        for (k = 0; nb - (1. / comp) > 0.; k++)
            nb -= (1. / comp);
        comp = comp * 16.;
        j += print_char(base[k]);
    }
    return precision;
}

static double precision_test(double nb, int precision)
{
    unsigned int int_nb = nb;
    int k = 0;
    int comp = 16.;

    nb -= int_nb;
    for (int i = 0; i < precision; i++) {
        for (k = 0; nb - (1. / comp) > 0.; k++)
            nb -= (1. / comp);
        comp = comp * 16.;
    }
    if (nb >= 1. / (comp * 8.))
        return (1. / (comp * 16.));
    return 0.;
}

int scientif_convert_base(double nb, int precision, char p, char g)
{
    int i = 0;
    int j = 0;

    if (nb < 0.) {
        j += print_char('-');
        nb = nb * -1.;
    }
    j += print_char('0');
    j += print_char(g);
    for (i; nb >= 2.; i++)
        nb = nb / 2.;
    for (i; nb < 1.; i--)
        nb = nb * 2.;
    nb += precision_test(nb, precision);
    if (p == 'p')
        j += print_float_base(nb, "0123456789abcdef", precision);
    else
        j += print_float_base(nb, "0123456789ABCDEF", precision);
    j += print_char(p);
    return (j + print_signed_nbr(i));
}
