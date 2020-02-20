#include "holberton.h"
/**
 *string_toupper - updates a integer value to 98
 *@str: A pointer to an int that will be updated
 *
 *Return: void
 */
char *string_toupper(char *str)
{
char *c = str;
while (*str != '\0')
{
if (*str >= 'a' && *str <= 'z')
*str = *str - 32;
str++;
}
return (c);
}
