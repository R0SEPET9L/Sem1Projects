/*
** EPITECH PROJECT, 2023
** printf
** File description:
** G flag
*/

#include <stdarg.h>
#include "my.h"

static int g_flag_width(double temp, int *tab, int width, char e)
{
    int bytes = 0;

    if (e == 0)
        bytes = print_float(temp, tab[6]);
    else
        bytes = print_scient(temp, tab[6], e);
    if (width < 0) {
        width = -1 * width;
        for (int i = 0; i < width; i++)
            print_char(' ');
    }
    return bytes + width;
}

int fl_lg(va_list ap, int *tab)
{
    double temp = va_arg(ap, double);
    int ten_pow = 1;
    double test = 1;
    int size = 0;
    int width;

    for (int i = 0; i < tab[6]; i++)
        ten_pow = 10 * ten_pow;
    if (temp < 0.0001 || temp > ten_pow) {
        tab[6] -= 1;
        width = width_scientif(temp, tab);
        return g_flag_width(temp, tab, width, 'e');
    }
    while (test <= temp) {
        test = test * 10.;
        size += 1;
    }
    tab -= size;
    width = width_float(temp, 10, tab);
    return g_flag_width(temp, tab, width, 0);
}

int fl_ug(va_list ap, int *tab)
{
    double temp = va_arg(ap, double);
    int ten_pow = 1;
    double test = 1;
    int size = 0;
    int width;

    for (int i = 0; i < tab[6]; i++)
        ten_pow = 10 * ten_pow;
    if (temp < 0.0001 || temp > ten_pow) {
        tab[6] -= 1;
        width = width_scientif(temp, tab);
        return (g_flag_width(temp, tab, width, 'E'));
    }
    while (test <= temp) {
        test = test * 10.;
        size += 1;
    }
    tab -= size;
    width = width_float(temp, 10, tab);
    return (g_flag_width(temp, tab, width, 0));
}
