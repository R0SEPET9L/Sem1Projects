/*
** EPITECH PROJECT, 2023
** convert base
** File description:
** task05
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"

static int strlen_base(char const *str)
{
    int i = 0;

    while (*str != '\0') {
        i++;
        str++;
    }
    return i;
}

static int power_base(int nb, int p)
{
    int res;

    if (p < 0)
        return 0;
    if (p == 0)
        return 1;
    if (p == 1)
        return nb;
    if (p > 0) {
        res = power_base(nb , p / 2);
        if (res * res < res)
            return 0;
        if (p % 2 == 0)
            return (res * res);
        res = res * res * nb;
        if ((nb < 0) && (res > 0) || (nb > 0) && (res < 0))
            return 0;
        return (res);
    }
    return 0;
}

static long long convert_to_ten(char const *nbr , char const *base_from)
{
    int i = 0;
    int base_size = strlen_base(base_from);
    long long sum = 0;

    if (*nbr == '-')
        nbr++;
    while (*nbr != '\0') {
        i = 0;
        while (*nbr != base_from[i])
            i++;
        sum = sum * base_size + i;
        nbr++;
    }
    return sum;
}

static int sum_size(long long sum , int base_size)
{
    int i = 0;

    while (sum != 0) {
        sum = sum / base_size;
        i++;
    }
    return i;
}

static char *convert_base(char const *nbr,
    char const *base_from, char const *base_to)
{
    long long sum = convert_to_ten(nbr , base_from);
    int base_size = strlen_base(base_to);
    int i = sum_size(sum , base_size);
    char *str;

    if (*nbr != '-')
        i--;
    str = malloc(sizeof(char) * (i + 1));
    str[i + 1] = '\0';
    while (i >= 0) {
        str[i] = base_to[sum % base_size];
        sum = (sum / base_size);
        i--;
    }
    if (*nbr == '-')
        str[0] = '-';
    return str;
}

int print_conv_base(unsigned long long nb, char const *base_to)
{
    int size = sum_size(nb, 10);
    char *str = malloc(sizeof(char) * (size + 1));
    unsigned long long p = nb;

    str[size] = '\0';
    for (int i = 0; i < size; i++) {
        str[size - i - 1] = p % 10 + 48;
        p = p / 10;
    }
    return print_str(convert_base(str, "0123456789", base_to));
}
