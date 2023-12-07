/*
** EPITECH PROJECT, 2023
** flag p printf
** File description:
** turns pointer address into hexa
*/

#include "my.h"

int pointer_to_hexa(void *ptr)
{
    long long temp = ptr;

    print_str("0x");
    return 2 + print_conv_base(temp, "0123456789abcdef");
}
