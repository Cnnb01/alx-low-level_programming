#include <stdio.h>


/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
int n, n2;

for (n = 0; n <= 99; n++)
{
for (n2 = n; n2 <= 99; n2++)
{
putchar(n / 10 + '0');
putchar(n % 10 + '0');
putchar(' ');
putchar(n2 / 10 + '0');
putchar(n2 % 10 + '0');
if (n != 99 || n2 != 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}

