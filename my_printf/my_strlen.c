/*
** EPITECH PROJECT, 2023
** my_strlen
** File description:
** Counts and Returns number of char in a str
*/

#include "my.h"

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i]){
        i++ ;
    }
    return i;
}
