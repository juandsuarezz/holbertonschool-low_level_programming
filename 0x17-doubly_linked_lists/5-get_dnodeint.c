#include "lists.h"
/**
 *get_dnodeint_at_index - Returns the nth node of the dlnklist
 *@head: The head of the doubly linked list
 *@index: The nth number of the node we want
 *Return: The nth node or NULL if not exists
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int nodes = 0;
	dlistint_t *temp = head;

	if (head == NULL)
		return (NULL);

	while (nodes != index)
	{
		if ((temp->next) != NULL)
			temp = temp->next;
		else
			return (NULL);
		nodes++;
	}
	return (temp);
}
