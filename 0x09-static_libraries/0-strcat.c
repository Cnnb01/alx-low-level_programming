#include "main.h"
#include <string.h>
/**
*_strcat - a function that concatenates two strings.
*@dest: Destination buffer
*@src: Source string
*Description:this function concatenates two strings.
*Return: returns the pointer to the concatenated string
*/
char *_strcat(char *dest, char *src)
{
char *point;
point = strcat(dest, src);
return (point);
}
