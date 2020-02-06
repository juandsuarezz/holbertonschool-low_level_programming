k#include <stdio.h>
 /**
  *main - Entry point
  *Description: Function 
  *Return: 0 upon successful 
  */
int main(void)
{
int num = '0';
while (num <= '9')
{
putchar(num);
if (num != '9')
{
putchar(',');
putchar(' ');
}
num++;
}
putchar('\n');
return (0);
}
