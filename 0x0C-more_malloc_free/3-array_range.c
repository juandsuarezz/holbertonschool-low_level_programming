#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - Concatenates a string.
 * @min: String 1
 * @max: String 2
 * Return: Null or the array concatenate.
 */
int *array_range(int min, int max)
{
	int counter;
	int *array;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min + 1));

	if (array == NULL)
		return (NULL);

	for (counter = 0; min <= max; min++, counter++)
		*(counter + array) = min;

	return (array);
}
