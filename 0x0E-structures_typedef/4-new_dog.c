#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog -  New structure of dog
 * @name: Name new dog
 * @age: Age of new dog
 * @owner: Owner new dog
 * Return: New dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
