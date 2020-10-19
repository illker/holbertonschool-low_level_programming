#include "dog.h"

/**
* init_dog - Prototype
* @d: Struct dog
* @name: Variable char
* @age: Variable float
* @owner: Variable char
* Return: Void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
