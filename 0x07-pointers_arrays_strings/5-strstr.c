#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strstr - a function that locates a substring
 * @haystack: String that we want to check for substring
 * @needle: parameter containig the substring
 * Return: Always (success)
 */
char *_strstr(char *haystack, char *needle)
{
	size_t i, j, located;


	for (i = 0; haystack[i]; i++)
	{
		located = 0;

		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		       located = 1;	
		}
		if (located && !needle[j])
		{
			return (haystack + i);
		}
	}
	return (NULL);
}
