#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - _strdup
 * @str: variable
 * Return: Always 0 (Success)
 */
char *_strdup(char *str)
{
int i = 0;
int lenght = 0;
char *string;
if (str == NULL)
return (NULL);
while (str[i] != '\0')
{
lenght++;
i++;
}
i = 0;
string = malloc(sizeof(char) * (lenght + 1));
if (str == NULL)
return (NULL);
while (i < (lenght + 1))
{
string[i] = str[i];
i++;
}
string[i] = '\0';
if (str == NULL)
return (NULL);
return (string);
}
