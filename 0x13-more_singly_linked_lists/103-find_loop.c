#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: Pointer to head of the linked list
 * Return: The address of the node where the loop starts, or NULL if not there
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	while (fast == NULL && fast->next == NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;

			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
	}
	return (NULL);
}

