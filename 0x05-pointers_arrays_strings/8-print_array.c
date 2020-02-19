#include "holberton.h"
#include <stdio.h>
/**
 * print_array - Print n elements of an array.
 * @a: Array.
 * @n: Elements.
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		if (l != n - 1)
		{
			printf("%i, ", a[l]);
		}
		else
		{
			printf("%i", a[l]);
		}
	}
	putchar('\n');
}
