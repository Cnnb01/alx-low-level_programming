#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*
*
*/
int *array_range(int min, int max)
{
int *ar;
int i;
if (min > max)
{
return (NULL);
}
ar = malloc(sizeof(int) * (max - min) + 1);
if (ar == NULL)
{
return (NULL);
}
for (i = min; i <= max; i++)
{
ar[i - min] = i;
}
return (ar);
}
