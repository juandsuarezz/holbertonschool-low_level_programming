#include "lists.h"
#include <string.h>

/**
 * add_node - adds new node at the begining
 * @head: start point of linked list
 * @str: string to be added
 * Return: linked list + new node
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *newnode;
unsigned int count = 0;
newnode = malloc(sizeof(list_t));
if (!newnode)
return (NULL);
while(str[count]); 
{
count;
}
newnode->str = strdup(str);
newnode->len = count;
newnode->next = *head;
*head = newnode;
return (*head);
}
