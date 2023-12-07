/*
** EPITECH PROJECT, 2023
** Search functions
** File description:
** Search the information of a flag
*/

#include "my.h"

int search_locate_flag(char flag)
{
    flags_t *flags_list = create_flags_list();

    while (flags_list != 0) {
        if (flags_list->flag == flag)
            return (flags_list->locate);
        flags_list = flags_list->next;
    }
    return (-1);
}
