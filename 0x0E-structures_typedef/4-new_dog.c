#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - A function that creates a new dog.
 * @name: Pointer to name attribute
 * @age: Age atrribute
 * @owner: Pointer to owner attribute
 * Return: Pointer to new_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *namecopy;
	char *ownercopy;

	new_dog = malloc(sizeof(dog_t));

	if (!new_dog)
	{
		return (NULL);
	}

	namecopy = malloc(sizeof(char) * strlen(name) + 1);
	ownercopy = malloc(sizeof(char) * strlen(owner) + 1);

	if (!namecopy || !ownercopy)
	{
		free(namecopy);
		free(ownercopy);
		free(new_dog);

		return (NULL);
	}
	strcpy(namecopy, name);
	strcpy(ownercopy, owner);

	new_dog->name = namecopy;
	new_dog->age = age;
	new_dog->owner = ownercopy;

	return (new_dog);
}
