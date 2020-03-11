#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - Entry point
 * @size: variable
 * @array: putchar
 * @cmp: variable
 * Return: -1 always
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
