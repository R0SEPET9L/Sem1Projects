/*
** EPITECH PROJECT, 2023
** width p flag
** File description:
** print %p width of flag
*/

#include "my.h"

int width_p(unsigned long long sum , int base_size)
{
    int i = 0;

    while (sum != 0) {
        sum = sum / base_size;
        i++;
    }
    i = i + 2;
    return i;
}
