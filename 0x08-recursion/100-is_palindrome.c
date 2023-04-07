#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * is_palindrome - function that returns 1 if a string is a palindrome
 * @s: Pointer to the string to be checked
 * Return: 1 if palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int i = 0;
	int len;
	int flag = 0;

	len = strlen(s);

	for (i = 0; i < len; i++)
	{
		if (s[i] != s[len - i - 1])
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}


