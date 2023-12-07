/*
** EPITECH PROJECT, 2023
** is_num
** File description:
** Checks if its a digit
*/

#include "my.h"

int is_num(char str)
{
    if (str >= '0' && str <= '9'){
        return 1;
    }
    return 0;
}
