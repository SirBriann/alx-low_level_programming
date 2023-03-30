#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * string_toupper -  a function that changes all lowercase letters
 * @str: Our pointer parameter
 * Return: Always (success)
 */
char *string_toupper(char *str)
{
	char *p = str;

	while (*p != '\0')
	{
		if (islower(*p))
		{
			*p = toupper(*p);
		}
		p++;
	}
	return (str);
}
