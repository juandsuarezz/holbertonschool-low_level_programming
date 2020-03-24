#include "lists.h"
/**
 * sum_listint - returns sum
 * @head: pointer to the first element
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *copy;
copy = head;
while (copy != NULL)
{
sum = sum + copy->n;
copy = copy->next;
}
return (sum);
}
