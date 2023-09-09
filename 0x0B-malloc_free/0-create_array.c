#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*create_array - creates an array of chars
*@size: the size of the array
*@c: the character to initialize the array with
*Return: If size is 0 or if memory allocation fails, return NULL.
*Otherwise, return a pointer to the array.
*/
char *create_array(unsigned int size, char c)
{
char *ar;
unsigned int i;
if (size == 0)
{
return (NULL);
}
ar = malloc(size * sizeof(char));
if (ar == NULL)
{
return (NULL);
}

for (i = 0; i < size; i++)
{
ar[i] = c;
}
return (ar);

}
