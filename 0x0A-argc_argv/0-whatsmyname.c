#include <stdio.h>

/**
 * main - A function that prints its name, followed by a new line.
 * @argc: Our argument counter
 * @argv: Our array list
 * Return: Always (success)
 */
int main(int argc, __attribute__((unused)),  char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
