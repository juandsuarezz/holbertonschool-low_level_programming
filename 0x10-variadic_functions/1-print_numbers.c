#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - Entry point
 * @n: variable
 * @separator: variable
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numlist;
	unsigned int i = 0;
	int num = 0;

	if (separator == NULL)
		return;

	va_start(numlist, n);

	while (i < n)
	{
		num = va_arg(numlist, unsigned int);
		printf("%i", num);
		if (i < n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(numlist);
}
