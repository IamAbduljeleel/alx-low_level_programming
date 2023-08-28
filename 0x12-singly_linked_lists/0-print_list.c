#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: The Singly linked list
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	int my_nodes;
	
	if (h == NULL)
		return (0);
	for (my_nodes = 1; h->next != NULL; my_nodes++)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", h->len, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h=h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	return (my_nodes);
}
