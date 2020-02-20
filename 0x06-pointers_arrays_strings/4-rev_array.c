#include "holberton.h"
/**
 *reverse_array - updates a integer value to 98
 *@a: A pointer to an int that will be updated
 *@n: A pointer to an int that will be updated
 *Return: void
 */
void reverse_array(int *a, int n)
{
int temp = 0;
int i = 0;
while (i < n)
{
temp = a[i];
a[i] = a[n - 1];
a[n - 1] = temp;
i++;
n--;
}
}
