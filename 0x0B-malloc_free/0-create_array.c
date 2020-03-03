#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create_array
 * @size: variable
 * @c: Variable
 * Return: Always 0 (Success)
 */
char *create_array(unsigned int size, char c)
{
unsigned int count = 0;
char *array;
if (size == 0)
{
return (NULL);
}
array = malloc(sizeof(char) * size);
if (array == NULL)
{
return (NULL);
}
while (count < size)
{
array[count] = c;
count++;
}
return (array);
}
