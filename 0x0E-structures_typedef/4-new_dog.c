#include "dog.h"
#include <stdlib.h>
#include <stdio.h>




/**
 * _strlen - string's length
 * @long: The string long
 * Return: The length of the string
 */

int _strlen(char *long)
{
	int len = 0;

	while (*long++)
		len++;
	return (len);
}

/**
 * _strcopy - Copies a string
 * @store: store a string
 * @src: Tmain string
 * Return: The pointer to store
 */

char *_strcopy(char *store, char *src)
{
	int i = 0;

	for (; src[i]; i++)
		store[i] = src[i];
	store[i] = '\0';
	return (store);
}


/**
 * new_dog - new dog
 * @name: name's dog
 * @age: age's dog
 * @owner: owner's dog
 * Return: newdog
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *puppy;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	puppy = malloc(sizeof(dog_t));

	if (puppy == NULL)
		return (NULL);

	puppy->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if (puppy->name == NULL)
	{
		free(puppy);
		return (NULL);
	}

	puppy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (puppy->owner == NULL)
	{
		free(puppy->name);
		free(puppy);
		return (NULL);
	}

	puppy->name = _strcopy(puppy->name, name);
	puppy->age = age;
	puppy->owner = _strcopy(puppy->owner, owner);
	return (puppy);
}
