#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - prints elements of list
 * @h: a list
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
int elements = 0;
while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
h = h->next;
else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
elements++;
}
return (elements);
}
