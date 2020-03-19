#include "lists.h"
#include <string.h>

/**
 * add_node - adds new node
 * @head: pointer of linked list
 * @str: string to add
 * Return: linked list plus new node
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *node;
int length = 0;
node = malloc(sizeof(list_t));
if (!node)
return (NULL);
while (str[length] != 0)
{
length++;
}
node->str = strdup(str);
node->len = length;
node->next = *head;
*head = node;
return (*head);
}
