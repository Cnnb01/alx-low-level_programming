#include "main.h"
/**
*print_last_digit - a function that prints the last digit of a number
*
*@r: integer being passed
*Description: a function that prints the last digit of a number.
*Return: returns value of the last number
*/
int print_last_digit(int r)
{
int lastnum = r % 10;
_putchar(lastnum + '0');
return (lastnum);
}
