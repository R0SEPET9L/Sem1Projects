/*
** EPITECH PROJECT, 2023
** printf width for hexa flags
** File description:
** %x && %X flags width
*/

#include "my.h"

int width_base(unsigned long long sum, int base_size)
{
    int i = 0;

    while (sum != 0) {
        sum = sum / base_size;
        i++;
    }
    return i;
}
