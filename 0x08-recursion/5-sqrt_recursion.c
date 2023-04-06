#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: Our integer n
 * Return: Always (success)
 */
int _sqrt_recursion(int n)
{
	n = _sqrt_recursion(n, 1, n / 2);

	if (n < 0)
	{
		return (-1);
	}
	else if (n== 0 || n == 1)
	{
		return (n);
	}

	else
	{
		return _sqrt_recursion(n);
	}
}
