#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*_calloc - a function that allocates memory for an array
*Return: a pointer to the allocated memory
*@nmemb: elements to allocate memory for.
*@size: size of each element in bytes
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
int *ar;
ar = (int *)calloc(nmemb, size);
if (nmemb == 0 || size == 0)
{
return (0);
}
return (ar);
}

