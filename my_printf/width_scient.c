/*
** EPITECH PROJECT, 2023
** e && E flags width
** File description:
** printf width e flag
*/

#include "my.h"

int width_scientif(double nb, int *tab)
{
    int i = 0;
    int width = 0;
    int size_i = 0;

    for (i; nb >= 10.; i++)
        nb = nb / 10.;
    for (i; nb < 1.; i--)
        nb = nb * 10.;
    while (i != 0) {
        i = i / 10;
        size_i++;
    }
    if (size_i < 2)
        size_i = 2;
    width = (3 + tab[6] + size_i);
    return (width);
}
