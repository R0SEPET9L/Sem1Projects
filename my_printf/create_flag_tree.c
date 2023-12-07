/*
** EPITECH PROJECT, 2023
** Create Flag Tree
** File description:
** Creates a tree of flags (for my_printf project)
*/

#include "my.h"
#include <stdlib.h>

static func_tree_t *add_tree(func_tree_t **branch_list,
    char flag, int (*func)(va_list, int *))
{
    func_tree_t *new_tree = malloc(sizeof(func_tree_t));

    new_tree->branch_list = branch_list;
    new_tree->flag = flag;
    new_tree->func = func;
    return new_tree;
}

static func_tree_t **create_branch_list(int (*func_list[])(va_list, int *))
{
    func_tree_t **ptr_list = malloc(sizeof(func_tree_t *) * NB_FLAGS);
    char *flags = "cdieEfgGaAosuxXpn%";

    for (int i = 0; i < NB_FLAGS; i++)
        ptr_list[i] = add_tree(0, flags[i], func_list[i]);
    return ptr_list;
}

func_tree_t *length_mod(void)
{
    func_tree_t **new_branch_list = malloc(sizeof(func_tree_t *) * NB_LENGTH);
    int (*func_array[])(va_list, int *) = {&fl_c, &fl_d, &fl_i, &fl_le, &fl_ue,
        &fl_f, &fl_lg, &fl_ug, &fl_la, &fl_ua, &fl_o, &fl_s, &fl_u,
        &fl_lx, &fl_ux, &fl_p, &fl_i, &fl_perc};

    new_branch_list[0] = add_tree(create_branch_list
    (func_array), 'L', 0);
    new_branch_list[1] = add_tree(create_branch_list
    (func_array), 'l', 0);
    new_branch_list[2] = add_tree(create_branch_list
    (func_array), 'h', 0);
    new_branch_list[3] = add_tree(create_branch_list
    (func_array), 0, 0);
    return add_tree(new_branch_list, 0, 0);
}
