#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: This program will take a random number and display whether it is
 *positive, negative, or zero.
 *Return: Returns 0 upon successful run.
 */
int main(void)
{
int c;
for (c = '0' ; c <= '9' ; c++) 
{
if (c != 9)
putchar (c);
putchar (',');
putchar (' ');
}
return (0);
}
