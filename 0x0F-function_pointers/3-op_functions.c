#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - Function op that adds two intergers
 * @a: 1st int
 * @b: second int
 * Return: returns a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Function op that substracts two intergers
 * @a: 1st int
 * @b: second int
 * Return: returns a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Function op that multiplies two intergers
 * @a: 1st int
 * @b: second int
 * Return: returns a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Function op that divides two intergers
 * @a: 1st int
 * @b: second int
 * Return: returns a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Function that finds the reminder of the division of two intergers
 * @a: 1st int
 * @b: second int
 * Return: returns a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
