#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * argstostr -  function that concatenates all the arguments of your program
 * @ac: Points to our argument counter
 * @av: Double pointer to our argument vector
 * Return: Returns a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i;
	int len = 0;
	char *news;

	if (ac == 0 || !av)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
	}

	news = (char *)malloc(sizeof(char) * (len + 1));
	news[0] = '\0';

	strcat(news, av[0]);

	for (i = 1; i < ac; i++)
	{
		strcat(news, "\n");
		strcat(news, av[i]);
	}
	strcat(news, "\n");

	return (news);
}
