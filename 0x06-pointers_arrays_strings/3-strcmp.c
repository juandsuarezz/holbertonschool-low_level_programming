#include "holberton.h"
/**
 *_strcmp - updates a integer value to 98
 *@s1: A pointer to an int that will be updated
 *@s2: A pointer to an int that will be updated
 *Return: void
 */
int _strcmp(char *s1, char *s2)
{
if (*s1 > *s2)
return ((int)(*s1 - *s2));
if (*s1 <*s2)
return ((int)(*s1 - *s2));
return (0);
}
