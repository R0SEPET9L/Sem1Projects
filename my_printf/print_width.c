/*
** EPITECH PROJECT, 2023
** printf width specifiers
** File description:
** add width to my_printf
*/

#include "my.h"

int print_width(int width, int *tab)
{
    char c = ' ';
    int nb_bytes = tab[5] - width;

    if (nb_bytes < 0)
        nb_bytes = 0;
    if (tab[2] != 0)
        nb_bytes = nb_bytes * (-1);
    else if (tab[1] != 0)
        c = '0';
    if (nb_bytes > 0)
        for (int i = 0; i < nb_bytes; i++)
            print_char(c);
    return nb_bytes;
}
