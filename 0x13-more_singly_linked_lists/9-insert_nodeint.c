#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node
 * @head: Pointer to pointer that points to the head of a linked list
 * @n: Data for the new node
 * @idx: Index where the node will be added in the list
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new_node;
	size_t i = 0;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	temp = *head;

	while (i < idx - 1 && temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	if (!temp)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}


