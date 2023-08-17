#include "main.h"
#include <stdio.h>
/**
*more_numbers - a function that prints the numbers 0 to 14
*
*Description: function that prints the numbers, 0 to 9, followed by a new line.
*/
void more_numbers(void)
{
int j, i;
for (j = 0 ; j < 10 ; j++)
{
for (i = 0 ; i <= 14 ; i++)
{
if (i > 9)
{
_putchar((i / 10) + '0');
}
_putchar((i % 10) + '0');

}
_putchar('\n');
}

}
