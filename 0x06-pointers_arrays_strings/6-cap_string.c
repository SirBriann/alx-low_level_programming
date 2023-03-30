#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * cap_string - A function that capitalizes all words of a string
 * @str: Our bunch of letters
 * Return: Always (success)
 */
char *cap_string(char *str)
{
	int i, j;
	int flag = 1;

	j = strlen(str);

	for (i = 0; i < j; i++)
	{
		if (flag && isalpha(str[i]))
		{
			str[i] = toupper(str[i]);
			flag = 0;
		}
		else if (!isalpha(str[i]))
		{
			flag = 1;
		}
	}
	return (str);
}
