#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - A function that creates an array of integers.
 * @min: Minimum value in the array
 * @max: Maximum value in the array
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, currentValue;

	currentValue = min;

	if (min > max)
	{
		return (NULL);
	}

	arr = (int *)malloc(sizeof(int) * (max - min + 1));

	if (!arr)
	{
		return (NULL);
	}

	for (i = 0; currentValue <= max; i++, currentValue++)
	{
		arr[i] = currentValue;
	}

	return (arr);
}
