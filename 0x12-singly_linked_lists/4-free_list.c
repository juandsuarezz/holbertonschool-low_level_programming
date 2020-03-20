#include "lists.h"
/**
 *free_list - Frees a linked list (list_t)
 *@head: pointer to pointer in the list.
 */
void free_list(list_t *head)
{
list_t *temp;
while ((temp = head) != NULL)
{
head = head->next;
free(temp->str);
free(temp);
}
}
