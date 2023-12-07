/*
** EPITECH PROJECT, 2023
** o && u && x && X functions
** File description:
** o_u_x_X func
*/

#include <stdarg.h>
#include "my.h"

int fl_o(va_list ap, int *tab)
{
    unsigned long long temp = va_arg(ap, unsigned long long);
    int width = print_width(width_base(temp, 8), tab);
    int bytes = print_conv_base(temp, "01234567");

    if (width < 0) {
        width = -1 * width;
        for (int i = 0; i < width; i++)
            print_char(' ');
    }
    return (width + bytes);
}

int fl_u(va_list ap, int *tab)
{
    unsigned long long temp = va_arg(ap, unsigned long long);
    int width = print_width(width_base(temp, 10), tab);
    int bytes = print_conv_base(temp, "0123456789");

    if (width < 0) {
        width = -1 * width;
        for (int i = 0; i < width; i++)
            print_char(' ');
    }
    return (width + bytes);
}

int fl_lx(va_list ap, int *tab)
{
    unsigned long long temp = va_arg(ap, unsigned long long);
    int width = print_width(width_base(temp, 16), tab);
    int bytes = print_conv_base(temp, "0123456789abcdef");

    if (width < 0) {
        width = -1 * width;
        for (int i = 0; i < width; i++)
            print_char(' ');
    }
    return (width + bytes);
}

int fl_ux(va_list ap, int *tab)
{
    unsigned long long temp = va_arg(ap, unsigned long long);
    int width = print_width(width_base(temp, 16), tab);
    int bytes = print_conv_base(temp, "0123456789ABCDEF");

    if (width < 0) {
        width = -1 * width;
        for (int i = 0; i < width; i++)
            print_char(' ');
    }
    return (width + bytes);
}
