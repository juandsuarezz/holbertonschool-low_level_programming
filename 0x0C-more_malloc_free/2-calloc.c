#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - Concatenates a string.
 * @nmemb: String 1
 * @size: String 2
 * Return: Null or the array concatenate.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array = NULL;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * nmemb);
	if (array == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < nmemb)
	{
		array[i] = 0;
		i++;
	}
	return (array);
}
