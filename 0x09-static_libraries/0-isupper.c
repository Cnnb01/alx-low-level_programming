#include "main.h"
#include <ctype.h>
/**
*_isupper - inbuilt function that checks if letter is uppercase
*@c: the character to be checked
*Return: 1 if c is uppercase otherwise 0
*Description:a function that checks for uppercase character
*
*/
int _isupper(int c)
{
if (isupper(c))
{
return (1);
}
else
{
return (0);
}
}
