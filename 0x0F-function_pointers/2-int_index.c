#include "function_pointers.h"
/**
*int_index - Searches for an integer in an array using a custom function.
*@size: number of elements in the array
*@array: array holding the values
*@cmp: pointer to the function to be used to compare values
*Return: The index of the first element for which cmp returns true.
*If no element matches or size is less than or equal to 0, return -1.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0 || cmp == NULL || array == NULL)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if ((*cmp)(array[i]))
{
return (i);
}
}
return (-1);
}
