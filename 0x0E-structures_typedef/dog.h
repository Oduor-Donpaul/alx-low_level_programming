#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure of a dog
 * @name: pointer to name variable of type char
 * @age: pointer to age variable of type float
 * @owner: pointer to owner variable of type char
 *
 * Description: struct dog contains elements
 * name age owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
