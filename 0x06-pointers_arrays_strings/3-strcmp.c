#include "holberton.h"
/**
 *_strcmp - updates a integer value to 98
 *@s1: A pointer to an int that will be updated
 *@s2: A pointer to an int that will be updated
 *Return: void
 */
int _strcmp(char *s1, char *s2)
{
int count;
for (count = 0; s1[count] != '\0' && s2[count] != '\0'; count++)
{
if (s1[count] != s2[count])
return (s1[count] - s2[count]);
}
return (s1[count] - s2[count]);
}
