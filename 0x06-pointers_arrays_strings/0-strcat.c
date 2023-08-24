#include "main.h"
#include <string.h>
/**
*_strcat - a function that concatenates two strings.
*@dest: Destination buffer
*@src: Source string
*/
char *_strcat(char *dest, char *src)
{
char *point;
point = strcat(dest, src);
return (point);
}

