#include "lists.h"
/**
 * get_nodeint_at_index - returns nth node of a list
 * @head: the first element
 * @index: index of the node
 * Return: nth node of the list
 * NULL if node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
