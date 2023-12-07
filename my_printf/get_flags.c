/*
** EPITECH PROJECT, 2023
** Get_Flags
** File description:
** Looks for different printf flags inside a string
*/

#include <stdarg.h>
#include "my.h"
#include <stdlib.h>

static int flags_len(int i, const char *format)
{
    int count = i;
    char c = format[count];

    while (c == '+' || c == '-' || c == ' '){
        count++;
        c = format[count];
    }
    while (is_num(c) == 1) {
        count++;
        c = format[count];
    }
    return count;
}

static void check_precision(va_list ap, int *i,
    const char *format, int **tab)
{
    if (format[*i] != '.') {
        (*tab)[5] = my_getnbr(format, *i);
        *i = flags_len(*i, format);
    }
    if (format[*i] == '.' && is_num(format[*i + 1]) == 1) {
        *i = *i + 1;
        (*tab)[6] = my_getnbr(format, *i);
        *i = flags_len(*i, format);
        if ((*tab)[6] < 0)
            (*tab)[6] = 6;
    }
    if (format[*i] == '.' && is_num(format[*i + 1]) != 1) {
        *i = *i + 1;
        (*tab)[6] = 0;
        (*tab)[7] = 0;
    }
}

int get_flags(va_list ap, int *i, const char *format)
{
    int *tab = malloc(sizeof(int) * 8);
    int loc = 0;
    int j = *i + 1;

    tab[7] = -1;
    tab[6] = 6;
    for (j; loc >= 0 && format[j] != 0; j++){
        loc = search_locate_flag(format[j]);
        if (loc != -1)
            tab[loc] = 1;
    }
    *i = j - 1;
    check_precision(ap, i, format, &tab);
    return (search(tab, ap, i, format));
}
