/*
** EPITECH PROJECT, 2023
** flag a width
** File description:
** %a && %A
*/

#include "my.h"

int width_a(double nb, int *tab)
{
    int i = 0;
    int width = 0;
    int size_i = 0;

    for (i; nb >= 16.; i++)
        nb = nb / 16.;
    for (i; nb < 1.; i--)
        nb = nb * 16.;
    while (i != 0) {
        i = i / 10;
        size_i++;
    }
    width = (3 + tab[6] + size_i);
    return (width);
}
