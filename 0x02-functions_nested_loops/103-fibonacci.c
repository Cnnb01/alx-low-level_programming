#include <stdio.h>

/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
int i, sum;
long int prev = 1, curr = 2, next;
for (i = 1 ; i <= 50 ; i++)
{
printf("%ld", prev);
if (i != 50)
{
printf(", ");
}
next = prev + curr;
prev = curr;
curr = next;
}
while (i < 4000000)
{
if (i % 2 == 0)
{
sum = i + sum;
printf("\n");
}
}
return (0);
}
