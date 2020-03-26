#include "holberton.h"
/**
 * get_bit - returns the value of a bit
 * @n: integer
 * @index: index
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index > 63)
return (-1);
else
return ((n >> index) & (1));
}
