#include "holberton.h"
/**
 * swap_int - Function that swap values of two integers.
 * @a: Integer as a value.
 * @b: Integer as a value2.
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int swapp;

	swapp = *a;
	*a = *b;
	*b = swapp;

}
