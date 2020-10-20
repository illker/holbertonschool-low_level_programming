#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strcpy - prototype function
 * @dest: Variable char pointer
 * @src: Variable char pointer
 * Return: dest pointer
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0' ; a++)
	{
		dest[a] = src[a];
	}

	dest[a] = '\0';

	return (dest);
}

/**
* *new_dog - Prototype
* @name: Variable char
* @age: Variable float
* @owner: Variable char
* Return: new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *hotdog = NULL;
	int a, b;

	if (name == NULL || owner == NULL)
		return (NULL);
	hotdog = malloc(sizeof(dog_t));
	if (hotdog == NULL)
		return (NULL);
	for (a = 0; name[a] != '\0'; a++)
		;
	for (b = 0; owner[b] != '\0'; b++)
		;
	hotdog->name = malloc(sizeof(char) * (a + 1));
	hotdog->owner = malloc(sizeof(char) * (b + 1));
	if (hotdog->name == NULL || hotdog->owner == NULL)
	{
		free(hotdog->name);
		free(hotdog->owner);
		free(hotdog);
		return (NULL);
	}
	_strcpy(hotdog->name, name);
	_strcpy(hotdog->owner, owner);
	hotdog->age = age;
	return (hotdog);
}
