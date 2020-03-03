#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - str_concat
 * @s2: variable
 * @s1: Variable
 * Return: Always 0 (Success)
 */
char *str_concat(char *s1, char *s2)
{
int i;
int j;
char *conc;
conc = malloc(sizeof(s1) + sizeof(s2));
if (conc == NULL)
{
return (0);
}
for (i = 0; s1[i] != '\0'; i++)
{
conc[i] = s1[i];
}
for (j = 0; s2[j] != '\0'; i++, j++)
{
conc[i] = s2[j];
}
return (conc);
}
