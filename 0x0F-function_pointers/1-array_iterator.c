#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - Entry point
 * @array: variable
 * @size: putchar
 * @action: pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action == NULL || array == NULL)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
