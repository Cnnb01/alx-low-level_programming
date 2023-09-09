#include "main.h"
#include <stdlib.h>
/**
*str_concat - a function that concatenates two strings
*Return: Pointer to the concatinated strings (Success), NULL if conc is NULL
*or memory allocation fails
*@s1: The first string.
*@s2: The second string
*/
char *str_concat(char *s1, char *s2)
{
char *conc;
if (s1 == NULL || s2 == NULL)
{
return (NULL);
}
conc = malloc(strlen(s1) + strlen(s2) + 1);
if (conc == NULL)
{
return (NULL);
}
strcpy(conc, s1);
strcat(conc, s2);
return (conc);
}
