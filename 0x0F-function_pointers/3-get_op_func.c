#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * get_op_func - Function of data type char that takes two int arguments
 *@s: operator passed as argument
 * Return: returns a pointer to the function that corresponds to the operator
 */
int (*get_op_func(char *s))(int, int)
{

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	for (i = 0; ops[i].op != NULL; i++)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
	}
	return (0);
}
