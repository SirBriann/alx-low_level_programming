#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_listint2 - A function that frees a listint_t list.
 * @head: Pointer that points to the head of the linked list
 * Return: Returns nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = temp->next;
		temp->next = NULL;
	}
}
