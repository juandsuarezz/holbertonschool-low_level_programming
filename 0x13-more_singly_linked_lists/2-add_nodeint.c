#include "lists.h"
/**
 * add_nodeint - count elements of list
 * @head: double pointer
 * @n: value
 * Return: number of nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (*head);
}
