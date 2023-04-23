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

	int i = 0;

	while (i < 5)
	{
		if (s && s[0] == ops[i].op[0] && !s[1])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}

