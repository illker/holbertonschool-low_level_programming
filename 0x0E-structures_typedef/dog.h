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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
