#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - bidimensional arr
 *
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: int.
 */
int **alloc_grid(int width, int height)
{
int i, j;
int **arr;
if (width <= 0 || height <= 0)
{
return (NULL);
}
arr = malloc(height * sizeof(int *));
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
arr[i] = malloc(width * sizeof(int));
if (arr[i] == NULL)
{
while (i >= 0)
{
free(arr[i]);
i--;
}
free(arr);
return (NULL);
}
for (j = 0; j < width; j++)
{
arr[i][j] = 0;
}
}
return (arr);
}
