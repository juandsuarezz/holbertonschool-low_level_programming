#include <stdio.h>
/**
 * main - Entry point
 * @argc: variable
 * @argv: Variable
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int count;
printf("%s\n", argv[0]);
if (argc > 1)
{
for (count = 1; count < argc; count++)
{
printf("%s\n", argv[count]);
}
}
return (0);
}
