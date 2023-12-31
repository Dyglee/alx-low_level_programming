#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a structure representing a dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the dog's owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(dog *d, char *name, float age, char *owner);
void print_dog(dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* DOG_H */

