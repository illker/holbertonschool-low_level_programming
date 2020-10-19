#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Data type
 * @name: Variable char
 * @age: Variable float
 * @owner: Variable char
 */

struct dog
{
	char *name;
	float age;
	char  *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
