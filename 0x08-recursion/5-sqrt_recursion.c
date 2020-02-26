#include <stdio.h>
#include "holberton.h"
/**
 * check - entry point
 * Return: array
 * @c: string
 * @b: string
 */
int check(int c, int b)
{
if (c * c == b)
{
return (c);
}
if (c * c > b)
{
return (-1);
}
return (check(c + 1, b));
}
#include "holberton.h"
/**
 *  _sqrt_recursion - entry point
 * Return: array
 * @n: string
 */
int _sqrt_recursion(int n)
{
return (check(1, n));
}
