/*
** EPITECH PROJECT, 2023
** My putstr
** File description:
** task02
*/

#include "my.h"

int print_str(char const *str)
{
    int i = 0;

    if (str == 0)
        return print_str("(null)");
    while (*str != '\0') {
        print_char(*str);
        str++;
        i += 1;
    }
    return i;
}

int print_n_str(char const *str, int n)
{
    int i = 0;

    if (str == 0)
        return print_str("(null)");
    while (*str != '\0' && n > 0) {
        print_char(*str);
        str++;
        i += 1;
        n -= 1;
    }
    return i;
}
