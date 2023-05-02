#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: Double pointer to the head of the linked list
 * Return: Returns a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL, *current = NULL;

	if (!head || !*head)
	{
		return (NULL);
	}
	current = *head;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;

		prev = current;
		current = next;
	}
	*head = prev;

	return (*head);
}
