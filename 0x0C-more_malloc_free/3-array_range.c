#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*array_range -  a function that creates an array of integers.
*Return: a pointer to the allocated memory
*@min: the minimum value for the array (inclusive)
*@max: the maximum value for the array (inclusive)
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
ar = malloc(sizeof(int) * (max - min + 1));
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
