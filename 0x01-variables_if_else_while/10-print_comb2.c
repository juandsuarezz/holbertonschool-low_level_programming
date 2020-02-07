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
int c = 0;
while (c < 100)
{
putchar((c / 10) + '0');
putchar((c % 10) + '0');
{
if (c != 99)
putchar(',');
putchar(' ');
}
c++;
}
putchar('\n');
return (0);
}
