#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: the first element
 * @n: no. of
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp1 = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp1->next)
		temp1 = temp1->next;
	temp1->next = new;

	return (new);
}
