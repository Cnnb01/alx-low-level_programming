#include "main.h"
#include <stdio.h>
/**
*_sqrt_recursion - Calculates the square root of a number
*@n: The number for which to calculate the square root.
*Return: The square root as an integer, or -1 if n is negative.
*/ 
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (n);
}
return sqt(n, n / 2);
}

/**
*sqt - helper function to recursively calculate square root.
*@n: The number for which to calculate the square root.
*@n1: An initial guess for the square root.
*Return: The square root as an integer.
*
*/ 
int sqt(int n, int n1)
{
int n2 = (n1 + n / n1) / 2;
if (n2 == n1)
{
return n1;
}
return sqt(n, n2);
}
