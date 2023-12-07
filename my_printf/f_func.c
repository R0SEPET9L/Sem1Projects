/*
** EPITECH PROJECT, 2023
** float function call
** File description:
** f func
*/

#include <stdarg.h>
#include "my.h"

int fl_f(va_list ap, int *tab)
{
    double temp = va_arg(ap, double);
    int width = print_width(width_float(temp, 10, tab), tab);
    int bytes = print_float(tab[6], temp);

    if (width < 0) {
        width = -1 * width;
        for (int i = 0; i < width; i++)
            print_char(' ');
    }
    return (width + bytes);
}
