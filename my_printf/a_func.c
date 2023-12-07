/*
** EPITECH PROJECT, 2023
** flag a && A
** File description:
** a/A flags
*/

#include <stdarg.h>
#include "my.h"

int fl_la(va_list ap, int *tab)
{
    double temp = va_arg(ap, double);
    int width = print_width(width_a(temp, tab), tab);
    int bytes = scientif_convert_base(temp, tab[6], 'p', 'x');

    if (width < 0) {
        width = -1 * width;
        for (int i = 0; i < width; i++)
            print_char(' ');
    }
    return (width + bytes);
}

int fl_ua(va_list ap, int *tab)
{
    double temp = va_arg(ap, double);
    int width = print_width(width_a(temp, tab), tab);
    int bytes = scientif_convert_base(temp, tab[6], 'P', 'X');

    if (width < 0) {
        width = -1 * width;
        for (int i = 0; i < width; i++)
            print_char(' ');
    }
    return (width + bytes);
}
