#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - Concatenates a string.
 * @s1: String 1
 * @s2: String 2
 * Return: Null or the array concatenate.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int *array = NULL;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
 array = malloc (sizeof(unsigned int) * (nmemb * size));
return (array);
}
