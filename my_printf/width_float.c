/*
** EPITECH PROJECT, 2023
** width float
** File description:
** calculate width of a float
*/

#include "my.h"

int width_float(double sum , int base_size, int *tab)
{
    int i = 0;
    int width = 0;

    while (sum != 0) {
        sum = sum / base_size;
        i++;
    }
    width = (i + tab[6] + 1);
    return (width);
}
