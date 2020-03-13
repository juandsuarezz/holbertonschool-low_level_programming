#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Entry point
 * @n: variable
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	va_start(ap, n);

	sum = 0;
	i = 0;

	while (i < n)
	{
		sum = sum + va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return (sum);
}
