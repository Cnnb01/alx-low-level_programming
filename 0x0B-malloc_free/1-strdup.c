#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*_strdup - function that returns a pointer to a newly allocated space in memory
*
*
*/
char *_strdup(char *str)
{
char *mem;
if (str == NULL)
{
return (NULL);
}
mem = malloc(strlen(str) + 1);

if(mem == NULL)
{
return (NULL);
}
strcpy(mem, str);
return (mem);
}
