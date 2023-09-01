#include "main.h"
#include <stdio.h>
/**
*factorial - a function that returns the factorial of a given number.
*@n: the integer being passed
*Return: returns the factorial of the given number
*
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
