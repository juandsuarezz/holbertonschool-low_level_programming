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
char c = 'a';
while (c <= 'z')
{
if (c == 'e' || c == 'q')
c++;
else
{
putchar(c);
c++;
}
}
putchar('\n');
return (0);
}
