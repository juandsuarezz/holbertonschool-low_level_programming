#include <stdio.h>
 /**
  *main - Entry point
  *
  *Description: A program
  *Return: 0 upon successful 
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
