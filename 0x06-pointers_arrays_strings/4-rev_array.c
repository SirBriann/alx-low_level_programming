#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * reverse_array - a function that reverses the content of an array
 * @a: Our pointer array
 * @n: Our integer n for size of array
 * Return: Always (success)
 */
void reverse_array(int *a, int n)
{
	int temp = 0;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
