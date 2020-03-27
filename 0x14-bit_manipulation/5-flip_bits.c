#include "holberton.h"
/**
 * flip_bits - returns the number of bits
 * @n: number
 * @m: number
 * Return: the integer result
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int c;
int i;
c = (m ^ n);
i = 0;
while (c)
{
if (c & 1)
i++;
c = c >> 1;
}
return (i);
}
