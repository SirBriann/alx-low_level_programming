#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
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

	switch (*operator)
	{
		case '+':
			calc = op_add(num1, num2);
			break;
		case '-':
			calc = op_sub(num1, num2);
			break;
		case '*':
			calc = op_mul(num1, num2);
			break;
		case '/':
			if (num2 == 0)
			{
				printf("Error\n");
				exit(100);
			}
			calc = op_div(num1, num2);
			break;
		case '%':
			if (num2 == 0)
			{
				printf("Error\n");
				exit(100);
			}
			calc = op_mod(num1, num2);
			break;
		default:
			printf("Error\n");
			exit(99);
	}
	printf("%d\n", calc);

	return (0);
}
