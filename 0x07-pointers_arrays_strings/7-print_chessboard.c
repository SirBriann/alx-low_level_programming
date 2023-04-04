#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_chessboard - a function that prints the chessboard
 * @a: It points to the array to be checked
 * @[]: The array holding the values
 * Return: Always (success)
 */
void print_chessboard(char (*a)[8])
{
	size_t i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
