#include "main.h"
#include <stdlib.h>
/**
*alloc_grid -  a function that returns a pointer to a 2D array of integers
*@width: the width of the grid
*@height: the height of the grid
*Return:pointer to allocated 2D array, or NULL if failure or invalid size
*/
int **alloc_grid(int width, int height)
{
int **alloc;
int i;
if (width <= 0 || height <= 0)
{
return (NULL);
}
alloc = malloc(height * sizeof(int *));
if (alloc == NULL)
{
return (NULL);
}
for (i = 0; i <= height; i++)
{
alloc[i] = malloc(width * sizeof(int));
}

return (alloc);
}
