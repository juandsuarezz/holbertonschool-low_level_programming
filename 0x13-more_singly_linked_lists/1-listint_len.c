#include "lists.h"
/**
 * listint_len - count elements of list
 * @h: pointer
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0;
if (h == NULL)
return (0);
else
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
