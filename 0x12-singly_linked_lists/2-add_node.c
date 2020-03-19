#include "lists.h"
#include <string.h>
/**
 * add_node - adds new node
 * @head: point
 * @str: string to add
 * Return: linked list + new node
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
int counter = 0;
new_node = malloc(sizeof(list_t));
if (!new_node)
return (NULL);
while (str[counter])
{
counter++;
}
new_node->str = strdup(str);
new_node->len = counter;
new_node->next = *head;
*head = new_node;
return (*head);
}
