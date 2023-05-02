#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint_safe - function that frees a listint_t list.
 * @h: Double pointer that points to the head of the linked list
 * Return: Returns the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *next;

	if (!h || !*h)
	{
		return (count);
	}

	current = *h;

	while (current)
	{
		next = current->next;
		printf("[%p] %d\n", (void *)current, current->n);

		if (current >= next)
		{
			printf("-> [%p] %d\n", (void *)next, next->n);
			free (current);
			break;
		}
		free(current);
		current = next;
		count++;
	}
	*h = NULL;

	return (count);
}
