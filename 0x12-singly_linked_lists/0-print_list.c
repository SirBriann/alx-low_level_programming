#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list
 * @h: Pointer to the head of a linked list
 * Return: Returns a list_t list
 */
size_t print_list(const list_t *h)
{
	const list_t *head = h;
	size_t count = 0;

	while (head != NULL)
	{
	if (!head->str)
	{
	printf("[0] (nil)\n");
	}
	else
	{
	printf("[%d] %s\n", head->len, head->str);
	}
	count++;
	head = head->next;
	}
	return (count);
}

