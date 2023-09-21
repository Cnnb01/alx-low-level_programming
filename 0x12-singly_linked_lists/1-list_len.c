#include "lists.h"
/**
* list_len -  returns the number of elements in a linked.
* @h: A pointer to the head of the list.
*
* Return: The number of nodes (elements) in the list.
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
