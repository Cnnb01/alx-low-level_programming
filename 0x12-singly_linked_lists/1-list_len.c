#include "lists.h"
/**
*
*/
size_t list_len(const list_t *h)
{
const list_t *p = h;
size_t count = 0;
if (h == NULL)
{
printf("[0] (nil)\n");
}
while (p != NULL)
{
p = p->next;
count++;
}
return (count);
}
