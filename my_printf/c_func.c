/*
** EPITECH PROJECT, 2023
** print char
** File description:
** flag char
*/

#include <stdarg.h>
#include "my.h"

int fl_c(va_list ap, int *tab)
{
    char temp = va_arg(ap, int);
    int width = print_width(width_char(temp), tab);
    int bytes = print_char(temp);

    if (width < 0) {
        width = -1 * width;
        for (int i = 0; i < width; i++)
            print_char(' ');
    }
    return (width + bytes);
}
