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
	char *p;
	unsigned int t, i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	t = nmemb * size;
	p = malloc(t);
	if (p == NULL)
		return (NULL);
	for (i = 0 ; i < t ; i++)
	{
		p[i] = '\0';
	}
	return (p);
}
