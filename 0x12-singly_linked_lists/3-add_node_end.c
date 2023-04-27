#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - Function that adds a new node at the end of a list_t list.
 * @str: Pointer to the string
 * @head: Pointer to a pointer that points to the head of the linked list
 * Return: Returns the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	temp = *head;
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
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}
	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;

	return (new_node);
}
