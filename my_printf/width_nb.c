/*
** EPITECH PROJECT, 2023
** get width of print conv base
** File description:
** width calc
*/

#include "my.h"

int width_nb(long long sum , int base_size)
{
    int i = 0;

    while (sum != 0) {
        sum = sum / base_size;
        i++;
    }
    return i;
}
