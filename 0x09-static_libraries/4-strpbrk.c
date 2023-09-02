#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*_strpbrk - a function that searches a string for any of a set of bytes.
*@s: pointer to the string in which to search for.
*@accept: string containing characters to search for in given string.
*Return: Pointer to the modified memory region.
*Description: a function that searches a string for any of a set of bytes.
*/
char *_strpbrk(char *s, char *accept)
{
return (strpbrk(s, accept));
}
