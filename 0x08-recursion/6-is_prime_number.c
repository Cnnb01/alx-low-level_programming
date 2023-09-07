#include "main.h"
#include <stdio.h>
/**
*is_prime_number - a function that checks if number is a prime number
*@n: integer being passed
*Return: 0 is not prime 1 is prime
*/
int is_prime_number(int n)
{
if (n < 2)
{
return (0);
}
if (n == 2 || n == 3 || n == 5 || n == 7)
{
return (1);
}
while (n > 11)
{
if (n % 2 == 0)
{
return (0);
}
else if(n % 3 == 0)
{
return (0);
}
else if (n % 4 == 0)
{
return (0);
}
else if (n % 5 == 0)
{
return (0);
}
else if (n % 6 == 0)
{
return (0);
}
else if (n % 7 == 0)
{
return (0);
}
else if (n % 8 == 0)
{
return (0);
}
else if (n % 9 == 0)
{
return (0);
}
else if (n % 10 == 0)
{
return (0);
}
else
{
return (1);
}
}
return (1);
}
