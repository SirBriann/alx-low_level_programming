#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: Pointer to pointer that points to the head of a linked list
 * Return: returns the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (!*head)
	{
		return (0);
	}
	temp = *head;
	n = temp->n;
	*head = temp->next;
	free(temp);

	return (n);
}
