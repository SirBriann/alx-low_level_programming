#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "function_pointers.h"
/**
 * int_index - A function that searches for an integer.
 * @array: Pointer to array
 * @size: size of the array
 * @cmp: Pointer to function that take an int as an argument
 * Return: Returns the intergers
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (!array || !cmp)
	{
		return (-1);
	}

	if (cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
