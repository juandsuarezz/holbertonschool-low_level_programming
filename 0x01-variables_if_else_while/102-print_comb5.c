#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: This program will print all letters in lowercase except for
 *q and e.
 *Return: 0 upon successful completion
 */
int main(void)
{
int n1;
int n2;

for (n1 = 0; n1 < 100; n1++)
{
for (n2 = n1 + 1; n2 < 100; n2++)
{
putchar((n1 / 10) + '0');
putchar((n1 % 10) + '0');
putchar(' ');
putchar((n2 / 10) + '0');
putchar((n2 % 10) + '0');
if (n1 != 98 || n2 != 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
