/*
** EPITECH PROJECT, 2023
** my h
** File description:
** my printf
*/

#include <stdarg.h>

#ifndef MY_H_
    #define MY_H_
    #define NB_FLAGS 18
    #define NB_LENGTH 4
    #define NB_MODS 3

typedef struct flags {
    struct flags *next;
    char flag;
    int locate;
} flags_t;

typedef struct func_tree {
    struct func_tree **branch_list;
    char flag;
    int (*func)(va_list, int *);
} func_tree_t;

int print_n_str(char const *, int);
flags_t *create_flags_list(void);
int print_conv_base(unsigned long long, char const *);
func_tree_t *length_mod(void);
int get_flags(va_list ap, int *, const char *);
unsigned long my_getnbr(char const *, int i);
int is_num(char);
int my_printf(const char *, ...);
int my_strlen(char const *);
int pointer_to_hexa(void *);
int print_char(char);
int print_float(int, double);
int print_nbr(int);
int print_str(char const *);
int scientif_convert_base(double, int, char, char);
int print_scient(double, int, char);
int search(int *, va_list, int *, const char *);
int search_locate_flag(char);
int fl_la(va_list ap, int *);
int fl_ua(va_list ap, int *);
int fl_c(va_list ap, int *);
int fl_d(va_list ap, int *);
int fl_i(va_list ap, int *);
int fl_le(va_list ap, int *);
int fl_ue(va_list ap, int *);
int fl_f(va_list ap, int *);
int fl_lg(va_list ap, int *);
int fl_ug(va_list ap, int *);
int fl_o(va_list ap, int *);
int fl_u(va_list ap, int  *);
int fl_lx(va_list ap, int *);
int fl_ux(va_list ap, int *);
int fl_perc(va_list ap, int *);
int fl_s(va_list ap, int *);
int fl_p(va_list ap, int *);
int width_a(double, int *);
int width_float(double, int, int *);
int width_scientif(double, int *);
int width_str(char const *);
int width_nb(long long, int);
int width_char(char);
int width_base(unsigned long long, int);
int width_p(unsigned long long, int);
int print_width(int, int *);

#endif
