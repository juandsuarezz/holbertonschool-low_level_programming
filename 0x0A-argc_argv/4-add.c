#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: Argument vector contains the arguments passed to the program
 * Return: Always 0 (Success) and exit
 */
int main(int argc, char *argv[])
{
int count;
int sum = 0;
if (argc == 1)
{
}
else
for (count = 1; count < argc; count++)
{
if (!isdigit(*argv[count]))
{
printf("Error\n");
return (1);
}
else
sum += atoi(argv[count]);
}
printf("%i\n", sum);
return (0);
}
