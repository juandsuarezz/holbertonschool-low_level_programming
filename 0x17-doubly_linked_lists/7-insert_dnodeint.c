#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a node at a given position
 * @h: head of the doubly linked list
 * @idx: the given position
 * @n: data
 * Return: address of the new node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int nodes;
	dlistint_t *new_node;
	dlistint_t *temp;
	dlistint_t *temp2;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		temp = *h;
		while (nodes < idx - 1 && temp != NULL)
		{
			temp = temp->next;
			nodes++;
		}
		if (temp == NULL)
			return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		temp2 = *h;
		*h = new_node;
		new_node->prev = NULL;
	}
	else
	{
		new_node->prev = temp;
		temp2 = temp->next;
		temp->next = new_node;
	}
	new_node->next = temp2;
	if (new_node->next != NULL)
		new_node->next->prev = new_node;
	return (new_node);
}
