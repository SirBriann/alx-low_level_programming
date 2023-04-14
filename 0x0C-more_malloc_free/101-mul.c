#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * mul - Fuction that multiplies 2 numbers
 * @num1: 1st int number
 * @num2: 2nd int number
 * Return: return the product of 2 numbers
 */
int mul(int num1, int num2)
{
	return (num1 * num2);
}


/**
 * main - Our main function
 * @argc: The argument counter
 * @argv:The argument that will hold our intergers
 * Return: Product of two numbers
 */
int main(int argc, char *argv[])
{
	int i, j, num1, num2;
	size_t results;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				exit(98);
			}
		}
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	results = mul(num1, num2);

	printf("%lu\n", results);

	return (0);
}
