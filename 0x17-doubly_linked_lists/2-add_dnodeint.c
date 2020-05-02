#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a doubly linked list
 * @head: head of the current doubly linked list
 * @n: value of the new node
 * Return: the address of the new element, or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
	}

	else
	{
		new_node->next = (*head);
		new_node->prev = NULL;
		(*head)->prev = new_node;
	}
	(*head) = new_node;
	return (new_node);
}
