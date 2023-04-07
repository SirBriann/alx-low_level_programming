#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * is_palindrome - function that returns 1 if a string is a palindrome
 * @s: Pointer to the string to be checked
 * @len: Paremeter for length of string
 * Return: 1 if palindrome and 0 if not
 */
int helper(char *s, int len);
int is_palindrome(char *s)
{
	int len = strlen(s);

	return helper(s, len);
}

/**
 * is_palindrome - function that returns 1 if a string is a palindrome
 * @s: Pointer to the string to be checked
 * @len: Paremeter for length of string 
 * Return: 1 if palindrome and 0 if not
 */

int helper(char *s, int len)
{
	if (len <= 1)
	{
		return (1);
	}
	
	else if (s[0] == s[len - 1])
	{
		return helper (s + 1, len - 2);
	}
	else
	{
		return (0);
	}
}



