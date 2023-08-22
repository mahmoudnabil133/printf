#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int handle_func(va_list *ap, char s, int p_sum);
int _printf(const char *format, ...);
int print_str(va_list *pa, int sum);
int print_char(va_list *pa, int sum);
int print_others(int sum, char s);
int print_uns(va_list *pa, int sum);
int print_rev(va_list *pa, int sum);
int print_rot(va_list *pa, int sum);
int print_bin(va_list *pa, int sum);
int print_hex(va_list *pa, int sum);
int print_Uhex(va_list *pa, int sum);
int print_oct(va_list *pa, int sum);
int print_int(va_list *pa, int sum);
#endif
