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
	char *dog_name;
	char *dog_owner;
	int name_length, ownner_length;

	name_length = length_of_string(name);
	ownner_length = length_of_string(owner);

	my_dog = malloc(sizeof(dog_t));
	dog_name = malloc(sizeof(char) * name_length);
	dog_owner = malloc(sizeof(char) * ownner_length);
	if (dog_name == NULL || dog_owner == NULL || my_dog == NULL)
	{
		_free(my_dog, 2, dog_name, dog_owner);
		return (NULL);
	}

	dog_name = strcpy(dog_name, name);
	dog_owner = strcpy(dog_owner, owner);

	my_dog->name = dog_name;
	my_dog->age = age;
	my_dog->owner = dog_owner;

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
/**
 * _free - A function that frees memory allocation in the new_dog function
 * @my_dog: Pointer to a structure that should be freed
 * @name: pointer to a character that should be freed
 * @owner: pointer to a character that should be freed
 */
void _free(dog_t *my_dog, int count, ...)
{
	va_list arg;
	int i;

	free(my_dog);
	for (i = 0; i < count; ++i)
		free(va_arg(arg, char *));

	va_end(arg);
}
