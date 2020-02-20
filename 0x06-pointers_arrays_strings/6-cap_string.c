#include "holberton.h"
/**
 *cap_string - updates a integer value to 98
 *@str: A pointer to an int that will be updated
 *
 *Return: void
 */
char *cap_string(char *str)
{
char *c = str;
while (*str != '\0')
{
if (*str >= 'a' && *str <= 'z')
if  (
*(str - 1) == ' ' ||
*(str - 1) == '\t' ||
*(str - 1) == '\n' ||
*(str - 1) == ',' ||
*(str - 1) == ';' ||
*(str - 1) == '.' ||
*(str - 1) == '!' ||
*(str - 1) == '?' ||
*(str - 1) == '"' ||
*(str - 1) == '(' ||
*(str - 1) == ')' ||
*(str - 1) == '{' ||
*(str - 1) == '}'
)
*str = *str - 32;
str++;
}
return (c);
}
