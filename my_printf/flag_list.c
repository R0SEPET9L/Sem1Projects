/*
** EPITECH PROJECT, 2023
** Flags list
** File description:
** Create the flags list
*/

#include <stdlib.h>
#include "my.h"

static flags_t *add_flag(flags_t *next, int locate, char flag)
{
    flags_t *new = malloc(sizeof(flags_t));

    new->next = next;
    new->locate = locate;
    new->flag = flag;
    return new;
}

flags_t *create_flags_list(void)
{
    flags_t *flag_list = malloc(sizeof(flags_t));

    flag_list = add_flag(flag_list , 4 , '+');
    flag_list = add_flag(flag_list , 3 , ' ');
    flag_list = add_flag(flag_list , 2 , '-');
    flag_list = add_flag(flag_list , 1 , '0');
    flag_list = add_flag(flag_list , 0 , '#');
    return flag_list;
}
