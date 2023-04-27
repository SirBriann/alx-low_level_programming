#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list
 * @h: Pointer to head of a linked list
 * Return: Returns number of elements
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;
	const list_t *head = h;

	while (head != NULL)
	{
		head = head->next;
		num++;
	}
	return (num);
}

