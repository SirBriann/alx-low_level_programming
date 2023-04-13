#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array
 * @width: Our array rows
 * @height: Our arrays columns
 * Return: return NULL on failure
 * If width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int n;
	int m;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	arr = (int **)malloc(sizeof(int *) * height);

	if (!arr)
	{
		return (NULL);
	}

	for (m = 0; m < height; m++)
	{
		arr[m] = (int *)malloc(sizeof(int) * width);

		if (!arr[m])
		{
			for (n = 0; n < m; n++)
			{
				free(arr[n]);
			}
			free(arr);
			return (NULL);
		}
	}
	return (arr);
}





