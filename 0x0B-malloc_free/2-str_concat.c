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

if (s1 == NULL)
{
s1 = malloc(sizeof(char));
*s1 = '\0';
}
if (s2 == NULL)
{
s2 = malloc(sizeof(char));
*s2 = '\0';
}
conc = malloc(sizeof(s1) + sizeof(s2));
if (conc != NULL)
{
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
else
return (NULL);
conc = malloc(sizeof(s1) + sizeof(s2));
}
