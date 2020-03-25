#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: pointer
 * Return: pointer
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *current = NULL;
listint_t *nxt;
while (*head != NULL)
{
nxt = (*head)->next;
(*head)->next = current;
current = *head;
*head = nxt;
}
*head = current;
return (*head);
}
