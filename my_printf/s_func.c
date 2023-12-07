/*
** EPITECH PROJECT, 2023
** print string
** File description:
** string flag
*/

#include <stdarg.h>
#include "my.h"

int fl_s(va_list ap, int *tab)
{
    char *temp = va_arg(ap, char *);
    int width = print_width(width_str(temp), tab);
    int bytes = print_str(temp);

    if (width < 0) {
        width = -1 * width;
        for (int i = 0; i < width; i++)
            print_char(' ');
    }
    return (width + bytes);
}
