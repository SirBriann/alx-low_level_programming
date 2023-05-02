#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node
 * @head: Double pointer that points to the head of the linked list
 * @index: The index at which the node is to be deleted
 * Return: Returns 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	size_t i = 1;
	listint_t *temp, *prev;

	if (!*head)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	prev = *head;

	while (prev != NULL && i < index - 1)
	{
		prev = prev->next;
		i++;
	}
	if (!prev || !prev->next)
	{
		return (-1);
	}

	temp = prev->next;
	prev->next = temp->next;
	free(temp);

	return (1);
}

