#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - A struct that create a dog file
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Desc: Poppy struct
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

#endif
