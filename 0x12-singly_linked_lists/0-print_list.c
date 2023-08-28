#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: The Singly linked list
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t my_nodes;

	my_nodes = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		my_nodes++;
	}
	return (my_nodes);
}
