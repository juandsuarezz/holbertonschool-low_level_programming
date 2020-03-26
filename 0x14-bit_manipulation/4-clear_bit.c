#include "holberton.h"
/**
 * clear_bit - sets the value of a bit
 * @index: index
 * @n: number
 * Return: 1, -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = *n & (~(1 << index));
return (1);
}
