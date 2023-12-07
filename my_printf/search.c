/*
** EPITECH PROJECT, 2023
** Search
** File description:
** Searches functions in function tree
*/

#include <stdarg.h>
#include "my.h"

static func_tree_t *search_tree(int *i, const char *format)
{
    func_tree_t *tree = length_mod();
    int k = *i;

    while (format[k] == ' ')
        k = k + 1;
    for (int j = 0; j < NB_MODS; j++) {
        if (tree->branch_list[j]->flag == format[*i]) {
            *i = k + 1;
            return tree->branch_list[j];
        }
    }
    return tree->branch_list[3];
}

static func_tree_t *search_func(int *i, const char *format, func_tree_t *tree)
{
    while (format[*i] == ' ')
        *i = *i + 1;
    for (int j = 0; j < NB_FLAGS; j++)
        if (tree->branch_list[j]->flag == format[*i]) {
            *i = *i + 1;
            return tree->branch_list[j];
        }
    return 0;
}

int search(int *tab, va_list ap, int *i, const char *format)
{
    int (*func)(va_list, int *) = search_func(i, format,
    search_tree(i, format))->func;

    return func(ap, tab);
}
