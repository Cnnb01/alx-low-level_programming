#include "main.h"
/**
* get_bit - Gets the value of a bit at a given index.
* @n: The number to extract the bit from.
* @index: The index of the bit to get, starting from 0.
*
* Return: The value of the bit at the specified index (1 or 0).
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int mask, checkBit;
mask = 1UL << index;
checkBit = (n & mask);
if (checkBit == mask)
{
return (1);
}
else
{
return (0);
}
}
