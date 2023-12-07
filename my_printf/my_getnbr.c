/*
** EPITECH PROJECT, 2023
** My_getnbr
** File description:
** task05
*/

#include<limits.h>
#include<stdio.h>
#include "my.h"

static int check_taille(long long valeur)
{
    if (valeur >= INT_MIN && valeur <= INT_MAX)
        return valeur;
    return (0);
}

static unsigned long true_getnbr(char const *str)
{
    int signe = 1;
    unsigned long valeur = 0;

    while (*str != '\0') {
        if (*str == '-' && valeur == 0) {
            signe = signe * (-1);
        }
        if (*str > 47 && *str < 58) {
            valeur = 10 * valeur + *str - 48;
        }
        if (*str != '-' && *str != '+' && (*str < 48 || *str > 57)) {
            return (check_taille(valeur * signe));
        }
        str++;
        }
    return (check_taille(valeur * signe));
}

unsigned long my_getnbr(char const *str, int i)
{
    for (int j = 0; j < i; j++)
        str = str + 1;
    return true_getnbr(str);
}
