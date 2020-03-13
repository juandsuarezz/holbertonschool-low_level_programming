#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - Entry point
 * @separator: coma
 * @n: variable
 * Return: sum
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strlist;
	unsigned int i = 0;
	char *str;

	if (separator == NULL)
		return;

	va_start(strlist, n);

	while (i < n)
	{
		str = va_arg(strlist, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		printf("%s", str);
		if (i < n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(strlist);
}
