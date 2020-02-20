#include "holberton.h"
/**
 *_strcat - updates a integer value to 98
 *@dest: A pointer to an int that will be updated
 *@src: A pointer to an int that will be updated
 *Return: void
 */
char *_strcat(char *dest, char *src)
{
char *c = dest;
while (*dest != '\0')
dest++;
while (*src != '\0')
{
*dest = *src;
src++;
dest++;
}
*dest = '\0';
return (c);
}
