#include "lists.h"

/**
 * add_node_end - Adds node to the end
 * @head: The node head
 * @str: String
 * Return: Address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *tmp;
	size_t k, counter = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	for (k = 0; str[k] != '\0'; k++)
		counter++;
	newnode->len = counter;
	newnode->next = NULL;
	tmp = *head;

	if (tmp == NULL)
		*head = newnode;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = newnode;
	}
	return (*head);


}
