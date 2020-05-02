#include "lists.h"
/**
 * sum_dlistint - sum of all data in the doubly linked list
 * @head: head of the list
 * Return: sum of the data in the doubly linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
