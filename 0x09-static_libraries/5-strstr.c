#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*_strstr - a function that locates a substring.
*@haystack: pointer to the string in which to search for.
*@needle: string containing characters to search for in given string.
*Return: Pointer to the modified memory region.
*Description: a function that locates a substring.
*/
char *_strstr(char *haystack, char *needle)
{
return (strstr(haystack, needle));
}
