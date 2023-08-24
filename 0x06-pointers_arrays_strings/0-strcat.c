#include "main.h"
#include <string.h>
/**
*_strcat - a function that concatenates two strings.
*@dest: Destination buffer
*@src: Source string
*/
char *_strcat(char *dest, char *src)
{
char *point = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

return (point);
}

