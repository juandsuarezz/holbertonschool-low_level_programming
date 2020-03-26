#include "holberton.h"
/**
 * binary_to_uint - converts binary number to an unsigned int
 * @b: pointer
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
int dec = 0;
int exp;
int num;
if (b == NULL)
return (0);
for (num = 0; b[num + 1]; num++)
{
if (b[num] != '0' && b[num] != '1')
return (0);
}
for (exp = 1; num >= 0; num--, exp *= 2)
dec += ((b[num] - '0') * (exp));
return (dec);
}
