#include <stdio.h>
/**
 * print_diagsums - entry point
 *
 * @a: array
 * @size: array
 *
 */
void print_diagsums(int *a, int size)
{
int i;
int j;
int s1 = 0;
int s2 = 0;
int c = 0;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (i + j == size - 1)
s2 = s2 + a[c];
if (i == j)
s1 = s1 + a[c];
c++;
}
}
printf("%d,", s1);
printf(" %d", s2);
putchar ('\n');
}
