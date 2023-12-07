/*
** EPITECH PROJECT, 2023
** printf %p
** File description:
** printf pointer to hexa flag
*/

#include <stdarg.h>
#include "my.h"

int fl_p(va_list ap, int *tab)
{
    void *temp = va_arg(ap, void *);
    int width = print_width(width_base((long long)temp, 16), tab);
    int bytes = pointer_to_hexa(temp);

    if (width < 0) {
        width = -1 * width;
        for (int i = 0; i < width; i++)
            print_char(' ');
    }
    return (width + bytes);
}
