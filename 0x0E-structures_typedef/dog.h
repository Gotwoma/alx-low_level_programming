#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - details about dog.
 * @name: dog's name.
 * @age: age of the dog.
 * @owner: name of the owner of the dog.
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/* function for typedef dog_t */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
