#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - a function that creates a new dog.
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of its owner
 *
 * Return: return a pointer to the structure dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *my_dog;
	char *dog_name;
	char *dog_owner;

	dog_name = malloc(sizeof(name));
	dog_owner = malloc(sizeof(owner));
	my_dog = malloc(sizeof(dog_t));

	if (name == NULL || owner == NULL || my_dog == NULL)
	{
		return (NULL);
	}
	else
	{
		strcpy(dog_name, name);
		strcpy(dog_owner, owner);
	}

	my_dog->name = dog_name;
	my_dog->age = age;
	my_dog->owner = dog_owner;

	return (my_dog);
}
