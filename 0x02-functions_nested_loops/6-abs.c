#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *  _abs - A function that computes the absolute value of an integer.
 * @x: Our parameter
 * Return: Always (success)
 */
int _abs(int x)
{
	if (x < 0)
	{
		int abs_value;

		abs_value = x * (-1);
		return (abs_value);
	}
	return (x);
}
