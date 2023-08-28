#include "lists.h"

/**
 * print_list - Prints all the elements in a singly linked list
 * @h: The pointer to the singly linked list head
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	int j;

	if (h == NULL)
		return (0);

	for (j = 1; h->next != NULL; j++)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", h->len, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	return (j);
}
