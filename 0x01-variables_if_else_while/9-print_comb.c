#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: Function will print all single digit numbers in a comma
 *separated list without the use of any char variables.
 *Return: 0 upon successful completion
 */
int main(void)
{
int c = '0';
while (c <= '9')
{
putchar(c);
if (c != '9')
{
putchar(',');
putchar(' ');
}
c++;
}
putchar('\n');
return (0);
}
