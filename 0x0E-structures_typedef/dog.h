#ifndef DOG
#define DOG
/**
 * struct dog - a dog structure
 * @name: The name of the dog
 * @age: the age of the dog
 * @owner: the name of the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG */
