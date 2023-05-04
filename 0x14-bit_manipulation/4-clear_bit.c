#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: Pointer to the value to be set
 * @index: Index of the value to be set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	else
	{
		*n &= ~(1 << index);
		return (1);
	}
}
