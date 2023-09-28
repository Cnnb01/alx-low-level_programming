#include "main.h"
/**
*
*/
unsigned int binary_to_uint(const char *b)
{
int i, n, store = 0, len;
if (b == NULL)
{
return (0);
}
len =  strlen(b);
for (i = 0; i < len; i++)
{
if (b[i] != '0' && b[i] != '1')
{
return (0);
}
n = 1 << (len - 1 - i);
store = store + (b[i] - '0') * n;
}
return (store);
}
