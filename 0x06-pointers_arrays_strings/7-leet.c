#include "holberton.h"
/**
 *leet - encodes a string to 1337
 *@str: string passed in
 *
 *Return: pointer to string
 */
char *leet(char *str)
{
char r[5] = {'4', '3', '0', '7', '1'};
char c[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
int cr = 0;
int rr = 0;
char *o = str;
while (rr < 5)
{
while (*str != '\0')
{
if (*str == c[cr] ||
*str == c[cr + 1])
*str = r[rr];
str++;
}
str = o;
cr += 2;
rr+;
} 
return (o);
}
