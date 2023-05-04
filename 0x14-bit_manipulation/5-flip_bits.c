#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would need to flip
 * @n: One of the number to flip
 * @m: The second number to flip
 * Return: Tje number of bits used for the flib
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	size_t num;
	unsigned long int flip;

	num = 0;
	flip = n ^ m;

	while (flip != 0)
	{
	flip &= (flip - 1);
	num++;
	}
	return (num);
}

