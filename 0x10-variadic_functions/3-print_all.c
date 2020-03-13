#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * p_char - Entry point
 * @c: variable
 */
void p_char(va_list c)
{
	printf("%c", va_arg(c, int));
}
/**
 * p_int - Entry point
 * @i: variable
 */
void p_int(va_list i)
{
	printf("%d", va_arg(i, int));
}
/**
 * p_float - Entry point
 * @f: variable
 */
void p_float(va_list f)
{
	printf("%f", va_arg(f, double));
}
/**
 * p_str - Entry point
 * @s: variable
 */
void p_str(va_list s)
{
	char *str;

	str = va_arg(s, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
/**
 * print_all - Entry point
 *
 * @format: variable
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	char *coma = "";
	va_list p_all;
	unsigned int i = 0, l = 0;

	pr_t ops[] = {
		{"c", p_char},
		{"i", p_int},
		{"f", p_float},
		{"s", p_str},
		{NULL, NULL}
	};

	va_start(p_all, format);

	while (format != NULL && format[i] != '\0')
	{
		l = 0;
		while (ops[l].pr != NULL)
	{
		if (format[i] == ops[l].pr[0])
		{
			printf("%s", coma);
			ops[l].f(p_all);
			coma = ", ";
		}
		l++;
	}
	i++;
	}
	printf("\n");
	va_end(p_all);
}
