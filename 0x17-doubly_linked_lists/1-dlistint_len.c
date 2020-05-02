#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a doubly linked list
 * @h: head of the linked list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
