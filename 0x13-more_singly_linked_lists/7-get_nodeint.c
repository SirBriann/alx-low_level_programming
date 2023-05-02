#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t
 * @head: Pointer to the head on a linked list
 * @index: Index to the node to be returned
 * Return: returns the nth node and NULL if it does not exit
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i = 0;
	listint_t *temp;

	temp = head;

	while (!temp)
	{
		return (NULL);
	}
	if (i == index)
	{
		return (temp);
		
		i++;
		temp = temp->next;
	}
	return (temp);
}

