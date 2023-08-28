#include "lists.h"

/**
 * add_node - add node at the beginning
 * @head: The head of the node
 * @str: The string that needs to be duplicated
 * Return: Address of the new element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	size_t j, counter = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	for (j = 0; str[j] != '\0'; j++)
		counter++;
	newnode->len = counter;
	newnode->next = *head;
	*head = newnode;
	return (*head);
}
