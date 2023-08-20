#include "main.h"

/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
int i, sum;
for (i = 0 ; i < 1024 ; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum = sum + i;
}
}
_putchar(sum);
_putchar('\n');
return (0);
}
