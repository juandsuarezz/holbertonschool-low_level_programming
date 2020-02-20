#include "holberton.h"
/**
 *_strncat - updates a integer value to 98
 *@dest: A pointer to an int that will be updated
 *@src: A pointer to an int that will be updated
 *@n: A pointer to an int that will be updated
 *Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
char *c = dest;
int counter = 0;
while (*dest != '\0')
dest++;
while (counter < n && *src != '\0')
{
*dest = *src;
dest++;
src++;
counter++;
}
return (c);
}
