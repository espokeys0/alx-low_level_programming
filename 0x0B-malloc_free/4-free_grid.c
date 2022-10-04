#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *free_grid - frees 2d array
 *@grid: 2d grid
 *@heigth: heigth
 *Return; void
 */

void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < heigth; i++)
free(grid[i]);

free(grid);
}
