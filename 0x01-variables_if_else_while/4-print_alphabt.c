#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
for (c = 'a' ; c <= 'z' ; c++)
if (c == 'e' | c == 'q')
c + 1;
else
putchar (c);
putchar ('\n');
return (0);
}


