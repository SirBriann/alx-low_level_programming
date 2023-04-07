#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: Our integer n
 * @c: Our parameter checker
 * Return: Always (success)
 */
int checker(int n, int c);
int _sqrt_recursion(int n)
{

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (checker(n, 1));
}
/**
 * checker - function that returns the natural square root of a number
 * @n: Our integer n
 * @c: Our paremeter checker
 * Return: Always (success)
 */
int checker(int n, int c)
{
	if (c * c > n)
		return (-1);
	if (c * c == n)
		return (c);

	return (checker(n, c + 1));
}
