#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: pointer
 * Return: pointer
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *current;
listint_t *nxt;
if (head == NULL || *head == NULL)
return (NULL);
if ((*head)->next == NULL)
return (*head);
current = *head;
*head = current->next;
nxt = (*head)->next;
current->next = NULL;
while (nxt != NULL)
{
(*head)->next = current;
current = *head;
*head = nxt;
nxt = nxt->next;
}
(*head)->next = current;
return (*head);
}
