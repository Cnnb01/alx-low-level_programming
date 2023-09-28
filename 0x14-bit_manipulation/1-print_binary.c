#include "main.h"
/**
* print_binary - Prints the binary representation of a number.
* @n: The number to print in binary.
*
* Description: This function prints the binary representation of a given
* unsigned long integer to the standard output.
*/
void print_binary(unsigned long int n)
{
unsigned long int mask = 1UL << 63;
if (n == 0)
{
putchar (0);
}
while (mask > 0)
{
if ((n & mask) != 0)
{
putchar('1');
}
else
{
putchar ('0');
}
mask >>= 1UL;
}
}
