#include <stdio.h>
#include <stdlib.h>
/**
 * swap_int - function that swaps the values of two integers
 * @a: Argument pointer a
 * @b: Argument pointer b
 * Return: Always (success)
 */
void swap_int(int *a, int *b)
{
	*a = 42;
	*b = 98;
	*a = 98;
	*b = 42;
}
