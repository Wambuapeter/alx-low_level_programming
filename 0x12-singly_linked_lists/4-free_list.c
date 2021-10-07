#include "lists.h"
/**
 * free_list - frees a list
 * @head: pointer to head of list
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		head->next = tmp;
		free(head->next);
		free(head);
		head = tmp;
	}
}
