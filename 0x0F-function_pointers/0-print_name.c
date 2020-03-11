#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Entry point
 * @name: variable
 * @f: putchar
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;

	f(name);
}
