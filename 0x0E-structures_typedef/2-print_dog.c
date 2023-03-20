#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog
 *
 * Retun: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("nil");
	}
	if (d->name == NULL)
	{
		printf("Name: nil\nAge: %f\nOwner: %s\n", d->age, d->owner);
	} else
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}	
