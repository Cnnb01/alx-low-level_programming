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
else if (n == 2)
{
return (1);
}
return (primer(n, 2));
return (0);
}
/**
*primer - a helper function to recursively calculate prime numbers
*@n: integer being passed
*@i: divisor to determine if number is prime
*Return: the prime number
*/
int primer(int n, int i)
{
if (i * i > n)
{
return (1);
}
if (n % i == 0)
{
return (0);
}
else
{
return (primer(n, i + 1));
}
}
