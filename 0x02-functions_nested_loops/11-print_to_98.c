#include "main.h"
/**
*print_to_98 - prints numbers from n to 98
*@n: starting number
*
*Description:a function that prints all natural numbers from n to 98
*/
void print_to_98(int n)
{
while (n <= 98)
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
_putchar(',');
_putchar(' ');
if (n > 98)
{
n = n - 1;
}
else
{
n = n + 1;
}
}
_putchar('\n');
}
