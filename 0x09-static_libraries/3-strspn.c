#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*_strspn - a function that gets the length of a prefix substring.
*@s: pointer to the string in which to search for the character.
*@accept: The character to search for within the string.
*Return: Pointer to the modified memory region.
*Description: a function that gets the length of a prefix substring.
*/
unsigned int _strspn(char *s, char *accept)
{
return (strspn(s, accept));
}
