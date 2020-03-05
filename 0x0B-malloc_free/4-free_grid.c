#include "holberton.h"
#include <stdlib.h>
/**
 *free_grid - free memo
 *@grid:int
 *@height:int
 *Return:none
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
