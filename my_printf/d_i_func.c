/*
** EPITECH PROJECT, 2023
** d && i functions
** File description:
** d && i functions
*/

#include <stdarg.h>
#include "my.h"

int fl_d(va_list ap, int *tab)
{
    int temp = va_arg(ap, int);
    int width = print_width(width_nb(temp, 10), tab);
    int bytes = print_nbr(temp);

    if (width < 0) {
        width = -1 * width;
        for (int i = 0; i < width; i++)
            print_char(' ');
    }
    return (width + bytes);
}

int fl_i(va_list ap, int *tab)
{
    int temp = va_arg(ap, int);
    int width = print_width(width_nb(temp, 10), tab);
    int bytes = print_nbr(temp);

    if (width < 0) {
        width = -1 * width;
        for (int i = 0; i < width; i++)
            print_char(' ');
    }
    return (width + bytes);
}
