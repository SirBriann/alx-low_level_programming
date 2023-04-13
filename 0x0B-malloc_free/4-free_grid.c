#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional grid previously created
 * @grid: Pointer to pointer to the array for the previous function
 * @height: The column to be allocated memory for
 * Return: Return the freed grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

