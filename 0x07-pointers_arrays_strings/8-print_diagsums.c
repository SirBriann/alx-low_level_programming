#include <stdio.h>
#include <stdlib.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * @a: Pointer to array holding our integers
 * @size: the size of our array
 * Return: Always (success)
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int leftD = 0;
	int rightD = 0;

	for (i = 0; size; i++)
	{
		for (j = 0; size; j++)
		{
			if (i == j)
			{
				leftD += *(a + i * size + j);
			}
			if (i + j == size - 1)
			{
				rightD += *(a + i * size + size - j - 1);
			}
		}
	}
}
