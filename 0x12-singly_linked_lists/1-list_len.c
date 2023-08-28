#include "lists.h"

/**
 * list_len - The function that returns the number of elements in a linked
 * @h: The head node
 * Return: The length of the linked list
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
