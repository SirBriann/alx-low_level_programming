#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the opcodes of its own main function
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	size_t i;
	int num;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}

	unsigned char *opcodes = (unsigned char *)&main;

	for (i = 0; i < num + 3; i++)
	{
		printf("%02x ", opcodes[i]);
	}
	printf("\n");

	return (0);
}
