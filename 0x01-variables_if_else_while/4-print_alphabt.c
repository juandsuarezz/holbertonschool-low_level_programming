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
char c;
for (c = 'a' ; c <= 'z' ; c++)
{
if (c == 'e' | c == 'q')
c + 1;
else
{
putchar (c);
}
}
putchar ('\n');
return (0);
}
