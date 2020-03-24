#include "lists.h"
/**
 * free_listint - frees listint_t
 * @head: pointer
 * Return: void
 */
void free_listint(listint_t *head)
{
listint_t *node;
while (head != NULL)
{
node = head->next;
free(head);
head = node;
}
}
