#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node
 * @head: pointer
 * @index: index
 * Return: 1 if success, -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int nodes = 0;
listint_t *indexm1 = *head, *indexpos = *head;
if (head == NULL || *head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(indexpos);
return (1);
}
while (nodes != index)
{
if (nodes == index - 1)
indexm1 = indexpos;
indexpos = indexpos->next;
if (indexpos == NULL)
return (-1);
nodes++;
}
indexm1->next = indexpos->next;
free(indexpos);
return (1);
}
