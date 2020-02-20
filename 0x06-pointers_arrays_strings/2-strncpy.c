#include "holberton.h"
/**
 *_strncpy - updates a integer value to 98
 *@dest: A pointer to an int that will be updated
 *@src: A pointer to an int that will be updated
 *@n: A pointer to an int that will be updated
 *Return: void
 */
char *_strncpy(char *dest, char *src, int n)
{
int counter = 0;
char *c = dest;
while ((counter < n) && *src != '\0')
{
*dest = *src;
dest++;
src++;
counter++;
}
while (counter < n)
{
*dest = '\0';
counter++;
dest++;
}
return (c);
}
