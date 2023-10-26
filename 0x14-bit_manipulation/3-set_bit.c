#include "main.h"
/**
*set_bit - Sets the value of a bit at a given index to 1.
* @n: A pointer to an unsigned long integer.
* @index: The index of the bit to set, starting from 0.
*
* Return: 1 if it worked, or -1 if an error occurred.
*
* Description: This function sets the value of a bit at the specified index
* in the unsigned long integer pointed to by @n to 1.
* It performs error checking to ensure that the index is within a valid range.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask;
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
mask = 1UL << index;
*n |= mask;
return (1);
}

