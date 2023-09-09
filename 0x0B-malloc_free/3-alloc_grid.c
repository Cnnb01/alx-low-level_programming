#include "main.h"
#include <stdlib.h>
/**
*
*
*
*/
int **alloc_grid(int width, int height)
{
int **alloc;
int i;
if (width <= 0 || height <= 0)
{
return (NULL);
}
alloc = malloc(height * sizeof(int*));
if (alloc == NULL)
{
return (NULL);
}
for(i = 0; i <= height; i++)
{
alloc[i] = malloc(width * sizeof(int));
}

return(alloc);
}
