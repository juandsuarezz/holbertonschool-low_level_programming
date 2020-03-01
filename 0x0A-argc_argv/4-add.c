#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - Entry point
 *@argc:int
 *@argv:char
 *Return: int
 */

int main(int argc, char *argv[])
{
int i, sum;
for (i = 1; i < argc; i++)
{
if (!atoi(argv[i]))
{
printf("Error\n");
return (1);
}
sum = sum + atoi(argv[i]);
}
printf("%i\n", sum);
return (0);
}
