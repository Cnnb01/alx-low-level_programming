#include "search_algos.h"
/**
* binary_search - searches for a value in a sorted array
* @array: pointer to the first element of the array
* @size: number of elements in an array
* @value: value to search for
* Return: index of value || -1 if not found
*/

int binary_search(int *array, size_t size, int value)
{
size_t low, high, mid, i;
if (array == NULL || size == 0)
{
return (-1);
}
for (low = 0, high = size - 1; low <= high; )
{
printf("Searching in array: %lu", low);
for (i = low + 1; i <= high; i++)
{
printf(", %lu", i);
}
printf("\n");
mid = (low + high) / 2;
if (array[mid] == value)
{
return (mid);
}
else if (array[mid] < value)
{
low = mid + 1;
}
else
{
high = mid - 1;
}
}
return (-1);
}
