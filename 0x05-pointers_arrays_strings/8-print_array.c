#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_array - function that prints n elements of an array of integers
 * @a: Our 1st pointer argument
 * @n: Our 2nd pointer argument
 * Return: Always (success)
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}
