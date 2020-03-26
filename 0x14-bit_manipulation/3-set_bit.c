#include "holberton.h"
/**
 * set_bit - sets the value of a bit
 * @n: number
 * @index: index
 * Return: 1 if worked, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
(*n = (*n | 1 << index));
return (1);
}
