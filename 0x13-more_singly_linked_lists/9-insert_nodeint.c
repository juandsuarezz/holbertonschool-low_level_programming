#include "lists.h"
/**
 * insert_nodeint_at_index - inserts new node at a position
 * @head: pointer
 * @idx: index
 * @n: value of node
 * Return: address of the node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *copy;
listint_t *new;
unsigned int nodes = 0;
unsigned int counter = 0;
if (head == NULL)
return (NULL);
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
copy = *head;
while (copy != NULL)
{
nodes++;
copy = copy->next;
}
if (nodes < idx)
{
free(new);
return (NULL);
}
copy = *head;
if (counter == idx)
{
new->next = *head;
*head = new;
return (*head);
}
while (counter != idx - 1)
{
copy = copy->next;
counter++;
}
new->next = copy->next;
copy->next = new;
return (new);
}
