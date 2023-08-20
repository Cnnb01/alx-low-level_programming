#include <stdio.h>

/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
long long int i, prev = 1, curr = 2, next;
for (i = 1 ; i <= 50 ; i++)
{
printf("%lld", prev);
if (i != 50)
{
printf(", ");
}
next = prev + curr;
prev = curr;
curr = next;
}
printf("\n");
return (0);
}
