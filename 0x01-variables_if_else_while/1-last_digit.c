#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
/**
 * main - Program that assigns a randon number to a variable
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int LastDgt;

	LastDgt = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (LastDgt > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, LastDgt);
	}
	else if (LastDgt == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, LastDgt);
	}
	else if (LastDgt < 6 && LastDgt != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, LastDgt);
	}
	return (0);
}
