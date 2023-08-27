#include <stdio.h>

/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
int i, sum = 0;
long int prev = 1, curr = 2, next;

for (i = 1 ; i <= 50 ; i++)
{
/*printf("%ld", prev);*/
/*if (i != 50)*/
/*{*/
/*printf(", ");*/
/*}*/
next = prev + curr;
prev = curr;
curr = next;
}

while (next < 4000000)
{
next = prev + curr;
prev = curr;
curr = next;
if (next % 2 == 0)
{
sum = next + sum;
printf(sum);
printf("\n");
}
}

return (0);
}
