#include <stdio.h>

/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
long int sum = 0, prev = 1, curr = 2, next;

while (next < 4000000)
{
next = prev + curr;
prev = curr;
curr = next;
if (next % 2 == 0 && next < 4000000)
{
sum = next + sum;
}
}
printf("%ld\n", sum + 2);

return (0);
}
