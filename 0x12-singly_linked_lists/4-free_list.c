#include "lists.h"

/**
 * free_list - function that frees a list
 * @head: Head node
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
	free(head->str);
	free(head);
}
