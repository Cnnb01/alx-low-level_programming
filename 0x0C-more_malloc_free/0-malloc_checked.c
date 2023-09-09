#include "main.h"
#include <stdlib.h>
/**
*malloc_checked - a function that allocates memory using malloc
*@b: integer being passed
*Return: a pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
unsigned int *a;
a = malloc(b * sizeof(int));
if (a == NULL)
{
exit(98);
}
return (a);
}
