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
	int i;
	int leftD = 0;
	int rightD = 0;

	for (i = 0; i < size; i++)
	{
		leftD += *(a + i * size + i);
		rightD += *(a + i * size + size - i - 1);
	}
	printf("%d, %d\n", leftD, rightD);
}
