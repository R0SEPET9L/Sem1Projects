/*
** EPITECH PROJECT, 2023
** t1
** File description:
** t1
*/

#include <unistd.h>
#include "my.h"

int print_char(char c)
{
    write(1 , &c , 1);
    return 1;
}
