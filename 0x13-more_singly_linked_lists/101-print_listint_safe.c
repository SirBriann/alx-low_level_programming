#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: Pointer to the head of a linked list
 * Return: Returns the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = head;
	size_t count = 0;
	
	if (!head)
	{
		exit(98);
	}

	while (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		count++;

		if (temp <= temp->next)
		{
			printf("-> [%p] %d\n", (void *)temp->next, temp->next->n);
			break;
		}
		temp = temp->next;
	}
	return (count);
}
