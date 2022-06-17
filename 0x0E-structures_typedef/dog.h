#ifndef DOG
#define DOG
/**
 * struct dog - a dog structure
 * @name: The name of the dog
 * @age: the age of the dog
 * @owner: the name of the owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG */