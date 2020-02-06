#include <stdio.h>
/**
 *main - Entry point
 *Description: Something
 *Return: 0 upon successful
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
