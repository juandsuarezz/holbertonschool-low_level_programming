#include "lists.h"
/**
 * get_nodeint_at_index - returns nth node
 * @head: pointer to first element
 * @index: index
 * Return: pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int nodes = 0;
listint_t *copy;
unsigned int counter = 0;
copy = head;
while (copy != NULL)
{
nodes++;
copy = copy->next;
}
copy = head;
if (index > nodes - 1)
return (NULL);
while (counter != index)
{
counter++;
copy = copy->next;
}
return (copy);
}
