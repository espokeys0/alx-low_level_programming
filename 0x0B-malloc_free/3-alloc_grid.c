#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - nested loop to make grid
 *@width: array's width
 *@heigth: array's heigth
 *Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
int **array;
int x, y, heigth;

if (width <= 0 || heigth <= 0)
return (NULL);

array = malloc(sizeof(int *) * heigth);

if (array == NULL)
return (NULL);

for (x = 0; x < heigth; x++)
{
array[x] = malloc(sizeof(int) * width);

if (array[x] == NULL)
{
for (; x >= 0; x--)
free(array[x]);
return (NULL);
}
}
for (x = 0; x < heigth; x++)
{
for (y = 0; y < width; y++)
array[x][y] = 0;
}
return (array);
}
