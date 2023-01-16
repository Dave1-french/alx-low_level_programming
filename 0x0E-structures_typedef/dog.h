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
/**
 * dog_info - typedef for struct dog
 */
typedef struct dog dog_info;

#endif
