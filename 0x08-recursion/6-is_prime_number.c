#include<stdio.h>
/**
 * check - entry point
 * Return: array
 * @count: counter
 * @n: integer
 */
int check(int count, int n)
{
if (n == count)
return (1);
else if (n <= 1)
return (0);
else if (n % count == 0)
return (0);
return (check(count + 1, n));
}
/**
 * is_prime_number - entry point
 * Return: array
 * @n: string
 */
int is_prime_number(int n)
{
return (check(2, n));
}
