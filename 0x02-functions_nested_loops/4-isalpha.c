#include "main.h"
#include <ctype.h>

/**
*_isalpha - checks for uppercase character.
*@c: is the character being checked
*
*Decription - this function checks for uppercase character.
*Return: 1 if alphabet, 0 otherwise.
*/

int _isalpha(int c)
{
if (islower(c) || isupper(c))
{
return (1);
}
else
{
return (0);
}
}
