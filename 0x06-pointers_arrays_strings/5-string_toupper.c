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
	int i, j;

	j = strlen(str);
	i = 0;

	while (i < j)
	{
		str[i] = toupper(str[i]);
		i++;
	}
	return (0);
}
