#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
*string_nconcat - Concatenates two strings, up to n characters from s2.
* @s1: The first string.
* @s2: The second string.
* @n: The maximum number of characters from s2 to concatenate.
* Return: A pointer to the newly allocated concatenated string,
*or NULL on failure.
*
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *a;
if (n >= strlen(s2))
{
n = strlen(s2);
}
a = malloc(strlen(s1) + n + 1);
if (a == NULL)
{
return (NULL);
}
if (s1 != NULL)
{
strcpy(a, s1);
}
else
{
a = '\0';
}
strncat(a, s2, n);
return (a);
}
