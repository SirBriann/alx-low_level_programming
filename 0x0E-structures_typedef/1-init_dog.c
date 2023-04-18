#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: Pointer to our function
 * @name: Pointer to our name attribute
 * @age: Our argument for age
 * @owner: Pointer to owner attribute
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
