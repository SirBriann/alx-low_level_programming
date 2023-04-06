#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * checker - function that returns 1 if the input integer is prime
 * @n: Integer to check
 * @c: our counter
 * Return: 1 if prime and 0 if otherwise
 */
int checker(int n, int c)
{
	if (n < 2)
		return (0);
	if (c > n / 2)
		return (1);
	if (n % c == 0)
		return (0);
	return (checker(n, c + 1));
}
/**
 * is_prime_number - function that returns 1 if the input integer is prime
 * @n: Integer to check
 * Return: 1 if prime and 0 if otherwise
 */
int is_prime_number(int n)
{
	return (checker(n, 2));
}
