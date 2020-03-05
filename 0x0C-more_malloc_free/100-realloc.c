#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - reallocates.
 * @old_size: old size
 * @new_size: new size
 * @ptr: pointer
 * Return: Null or the array concatenate.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size > old_size)
	{
		free(ptr);
		ptr = malloc(new_size);
		return (ptr);
	}

	else
	{

		if (new_size == old_size)
			return (ptr);

		if (ptr == NULL)
		{
			ptr = malloc(new_size);
			return (ptr);
		}

		if (new_size == 0 && ptr != NULL)
		{
			free(ptr);
			return (NULL);
		}
	}
		return (ptr);
}
