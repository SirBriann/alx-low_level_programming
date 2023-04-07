#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _pow_recursion - function that returns the value raised by another.
 * @x: Our integer x
 * @y: Our integer y
 * Return: Always (success)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}

	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
