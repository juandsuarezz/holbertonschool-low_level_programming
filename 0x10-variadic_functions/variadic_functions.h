#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct pr - Struct pr
 * @pr: The operator
 * @f: The function associated
 */

typedef struct pr
{
	char *pr;
	void (*f)(va_list p_all);
} pr_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void p_char(va_list c);
void p_int(va_list i);
void p_float(va_list f);
void p_str(va_list s);

#endif
