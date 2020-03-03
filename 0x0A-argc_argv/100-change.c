#include <stdio.h>
#include <stdlib.h>

/**
 *main - Prints the minimum coins needed
 *@argc: int
 *@argv: char
 *Return: int
 */

int main(int argc, char *argv[])
{
int x;
int cents = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
x = atoi(argv[1]);
if (x < 0)
{
printf("0\n");
return (0);
}
while (x > 0)
{
if (x >= 25)
{x = x - 25;
cents++; }
else if (x >= 10)
{x = x - 10;
cents++; }
else if (x >= 5)
{x = x - 5;
cents++; }
else if (x >= 2)
{x = x - 2;
cents++; }
else
{x = x - 1;
cents++; }
}
printf("%i\n", cents);
return (0);
}
