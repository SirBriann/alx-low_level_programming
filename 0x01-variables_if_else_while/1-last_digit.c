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
	int LastDigit;

	LastDigit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (LastDigit > 5)
	{
		printf("Last digit of %d is $LastDigit and is greater than 5\n");
	}
	else if (LastDigit == 0)
	{
		printf("Last digit of %d is $LastDigit and is 0\n");
	}
	else if (LastDigit < 6 && LastDigit == 0)
	{
		printf("Last digit of %d is $LastDigit and is less than 6 and not 0\n");
	}
	return (0);
}
