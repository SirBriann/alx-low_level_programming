#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
/**
 * main - Assign a random number to the variable n each time it is executed
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("$n is positive");
	}
	else if (n == 0)
	{
		printf("$n is zero");
	}
	else if (n < 0)
	{
		printf("$n is negative");
	}
	return (0);
}
