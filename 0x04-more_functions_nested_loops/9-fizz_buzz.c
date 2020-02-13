#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n = 1;
while (n <= 100)
{
if ((n % 3) == 0 && (n % 5) == 0)
{
printf("FizzBuzz");
}
else if ((n % 3) == 0 && (n % 5) != 0)
{
printf("Fizz");
}
else if ((n % 3) != 0 && (n % 5) == 0)
{
printf("Buzz");
}
else
{
printf("%i", n);
}
if (n != 100)
{
printf(" ");
}
n++;
}
printf("\n");
return (0);
}
