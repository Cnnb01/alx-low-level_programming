#include "main.h"
/**
*_isdigit - checks if given character is a number
*@c: the character to be checked
*Description: a function that checks for a digit (0 through 9).
*Return: 1 if c is a digit, 0 otherwise
*/
int _isdigit(int c)
{
/*converting the character to its numerical value*/
c = c - '0';
if (c >= 0 && c <= 9)
{
return (1);
}
else
{
return (0);
}
return (c);
}
