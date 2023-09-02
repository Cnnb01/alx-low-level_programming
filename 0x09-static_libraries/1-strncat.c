#include "main.h"
#include <string.h>
/**
*_strncat - a function that concatenates two strings.
*@dest: Destination buffer
*@src: Source string
*@n: most amount of bytes that can be used from src
*Return: Pointer to the concatenated string (dest).
*/
char *_strncat(char *dest, char *src, int n)
{
char *point;
point = strncat(dest, src, n);
return (point);
}
