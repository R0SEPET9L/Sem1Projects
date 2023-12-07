/*
** EPITECH PROJECT, 2023
** Exponential func
** File description:
** exp flag
*/

#include <stdarg.h>
#include "my.h"

int fl_le(va_list ap, int *tab)
{
    double temp = va_arg(ap, double);
    int width = width_scientif(temp, tab);

    if (width < 0) {
        for (int i = 0; i < -(width); i++)
            print_char(' ');
        width = -1 * width;
    }
    return (width + print_scient(temp, tab[6], 'e'));
}

int fl_ue(va_list ap, int *tab)
{
    double temp = va_arg(ap, double);
    int width = width_scientif(temp, tab);

    if (width < 0) {
        for (int i = 0; i < -(width); i++)
            print_char(' ');
        width = -1 * width;
    }
    return (width + print_scient(temp, tab[6], 'E'));
}
