#include "lists.h"
/**
 * pop_listint - delete head node
 * @head: pointer
 * Return: data of head node
 */
int pop_listint(listint_t **head)
{
int number;
listint_t *newhead;
if (*head == NULL)
return (0);
number = (*head)->n;
newhead = (*head)->next;
free(*head);
*head = newhead;
return (number);
}
