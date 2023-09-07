#include "main.h"
#include <string.h>
/**
*is_palindrome - a function that checks if a string is a palindrome
*Return: returns 1 if a string is a palindrome and 0 if not.
*@s: input string to check
*/
int is_palindrome(char *s)
{
int len = strlen(s);
if (*s == '\0')
{
return (1);
}

if (s[0] == s[len - 1])
{
char *inner = s + 1;
int substr = is_palindrome(inner);

if (substr ==  1)
{
return (1);
}
}
return (0);
}
