#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*_strchr - a function that locates a character in a string.
*@s: pointer to the string in which to search for the character.
*@c: character to search for within the string.
*Return: Pointer to the modified memory region.
*Description: a function that locates a character in a string.
*/
char *_strchr(char *s, char c)
{
return (strchr(s, c));
}
