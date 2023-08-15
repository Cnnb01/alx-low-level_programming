#include "main.h"

/**
*print_sign - checks the different integers
*@n: The integer to be checked
*Description: function checks if given integer is even,0 or odd
*Return: 1 if even, 0 if 0, -1 if negative.
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
if (n == 0)
{
_putchar('0');
return (0);
}
if (n < 0)
{
_putchar('-');
return (-1);
}
return (0);
}
