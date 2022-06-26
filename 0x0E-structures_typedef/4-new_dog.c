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
	unsigned int name_length, ownner_length, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	name_length = length_of_string(name);
	dog->name = malloc(name_length * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < name_length; i++)
		dog->name[i] = name[i];

	dog->age = age;

	ownner_length = length_of_string(owner);
	dog->owner = malloc(ownner_length * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < ownner_length; i++)
		dog->owner[i] = owner[i];
	return (dog);
}

/**
 * length_of_string - a function that returns the length of a string
 * @string: the string
 *
 * Return: return the length
 */
unsigned int length_of_string(char *string)
{
	int length = 0;

	while (*string++)
		length++;

	return (length);
}
