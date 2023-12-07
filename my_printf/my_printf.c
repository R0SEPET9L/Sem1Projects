/*
** EPITECH PROJECT, 2023
** Printf
** File description:
** works the same as printf
*/

#include <stdarg.h>
#include "my.h"

int my_printf(const char *format, ...)
{
    va_list ap;
    int i = 0;
    int nb_of_bytes;

    va_start(ap, format);
    while (format[i] != '\0'){
        if (format[i] == '%') {
            nb_of_bytes += get_flags(ap, &i, format);
        } else {
            nb_of_bytes += print_char(format[i]);
            i = i + 1;
        }
    }
    va_end(ap);
    return nb_of_bytes;
}
