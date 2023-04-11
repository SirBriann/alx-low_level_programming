#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array -  creates an array of chars
 * @size: The size of our array
 * @c: Argument for the array
 * Return: NULL is size = 0, pointer to array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	size_t i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		return (ptr);
	}
}
