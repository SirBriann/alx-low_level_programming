#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Attributes of a dog
 * @name: 1st attribute
 * @age: Second attribute
 * @owner: 3rd attribute
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
