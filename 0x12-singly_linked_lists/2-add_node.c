#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - unction that adds a new node at the beginning of a list_t list.
 * @str: Pointer to the string
 * @head: Pointer to a pointer that points to the head of the linked list
 * Return: Returns the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
	{
		return (NULL);
	}
	new_node->str = strdup(str);

	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
