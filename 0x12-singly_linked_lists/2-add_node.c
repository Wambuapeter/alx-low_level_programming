#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node
 * @head: the first element
 * @str: string to be duplicated
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	dup = new->str;
	len = new->len;
	*head = new->next;
	*head = new;

	return (new);
}
