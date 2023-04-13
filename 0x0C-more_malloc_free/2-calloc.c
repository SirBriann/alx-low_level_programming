#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - unction that allocates memory for an array, using malloc.
 * @size: bytes size
 * @nmemb: The size of the array
 * Return: Return the array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = (void *)malloc(sizeof(int) * (nmemb + size));

	if (!arr)
	{
		return (NULL);
	}

	memset(arr, 0, nmemb * size);

	return (arr);
}
