#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end of a linked list
 * @head: Pointer that points to the head of a linked list
 * @n: Link of our nodes
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
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


