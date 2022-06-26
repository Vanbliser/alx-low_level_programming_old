#include "dog.h"

/**
 * new_dog - a function that creates a new dog.
 * You have to store a copy of name and owner
 * Return NULL if the function fails
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of its owner
 *
 * Return: return a pointer to the structure dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	int name_length, ownner_length;

	name_length = length_of_string(name);
	ownner_length = length_of_string(owner);

	my_dog = malloc(sizeof(dog_t));
	my_dog->name = malloc(sizeof(char) * name_length);
	my_dog->owner = malloc(sizeof(char) * ownner_length);
	if (my_dog == NULL || my_dog->name == NULL || my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog->owner);
		free(my_dog);
		return (NULL);
	}

	strcpy(my_dog->name, name);
	strcpy(my_dog->owner, owner);
	my_dog->age = age;

	return (my_dog);
}
/**
 * length_of_string - a function that returns the length of a string
 * @string: the string
 *
 * Return: return the length
 */
int length_of_string(char *string)
{
	int length = 0;

	while (*string++)
		length++;

	return (length);
}
