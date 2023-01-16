#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog presentation
 * @name: First element
 * @age: Second element
 * @owner: third element
 *
 * Description: it's presentation of dog
 */

struct dog
{
	char *name;
	char age;
	char *owner;
};

typedef struct dog dog_info;
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
