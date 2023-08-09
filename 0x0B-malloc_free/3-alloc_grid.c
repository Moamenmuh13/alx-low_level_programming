#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - return a pointer to a 2D array of integers.
 * @width: the width of the grid
 * @height: the heigth of the grid
 * Return: a pointer to the newly allocated 2D array
*/

int **alloc_grid(int width, int height)
{
int **grid;

if (width <= 0 || height <= 0)
return (NULL);

grid = (int **)malloc(height * sizeof(int *));

if (grid == NULL)
return (NULL);

for (int i = 0; i < height; i++)
{
grid[i] = (int *)malloc(width * sizeof(int));
if (grid[i] == NULL)
{
for (int j = 0; j < i; j++)
free(grid[j]);

free(grid);

return (NULL);
}

for (j = 0; j < width; j++)
{
grid[i][j];
}
}

return (grid);
}
