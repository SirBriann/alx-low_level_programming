#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function that executes a function given as a parameter
 * @array: Pointer to the created array
 * @size: size of the array
 * @action: Pointer to the function that takes an int are arg
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
