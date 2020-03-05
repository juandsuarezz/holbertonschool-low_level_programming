#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - malloc_checked
 * @b: variable
 * Return: Always 0 (Success)
 */
void *malloc_checked(unsigned int b)
{
unsigned int *pointer;
pointer = malloc(b);
if (pointer == NULL)
{
exit(98);
}
return (pointer);
}
