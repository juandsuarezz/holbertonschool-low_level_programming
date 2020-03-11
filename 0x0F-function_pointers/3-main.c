#include "3-calc.h"
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
	char *signo;
	char operador;
	int n1, n2, respuesta;
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operador = argv[2][0];
	if ((operador != '*' && operador != '+' && operador != '-'
	     && operador != '/'  && operador != '%') || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	if ((operador == '/' || operador == '%') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	signo = argv[2];
	p = get_op_func(signo);
	respuesta = (*p)(n1, n2);
	printf("%d\n", respuesta);
	return (0);
}
