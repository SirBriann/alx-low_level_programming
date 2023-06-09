#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>
/**
 * main - main function of the program
 * @argc: our argument counter
 * @argv: Our argument vector. Stores our array of strings
 * Return: Always (success)
 */
int main(int argc, char *argv[])
{
	int num1, num2, calc;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	if (strlen(operator) != 1)
	{
		printf("Error\n");
		return (99);
	}
	if ((operator[0] == '/' || operator[0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	calc = get_op_func(operator)(num1, num2);

	printf("%d\n", calc);

	return (0);
}
