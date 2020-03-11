#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: variable
 * @argv: Variable
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int n1 = argv[1];
	int n2 = argv[3];
	int signo;
	char operator;
	int *result;
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2] != + ||
	    argv[2] != - ||
	    argv[2] != '/' ||
	    argv[2] != '%' )
	{
		printf("Error\n");
                exit(99);
	}

		printf("%i\n",result);

}
