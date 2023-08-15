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
/**
 * @dog_t - Typedef New name for struct dog
 */

typedef struct dog dog_t;

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
