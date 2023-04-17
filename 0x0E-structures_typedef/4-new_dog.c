#include "dog.h"
#include <stdlib.h>
#include <stdio.h>



/**
 * new_dog - new dog
 * @name: name's dog
 * @age: age's dog
 * @owner: owner's dog
 * Return: newdog
 */


dog_t *new_dog(char *name, float age, char *owner)
{
int d = 0, g = 0, o;
dog_t *puppy;

while (name[d] != '\0')
d++;

while (owner[g] != '\0')
g++;

puppy = malloc(sizeof(dog_t));
if (puppy == NULL)
{
free(puppy);
return (NULL);
}
puppy->name = malloc(d * sizeof(puppy->name));
if (puppy->name == NULL)
{
free(puppy->name);
free(puppy);
return (NULL);
}
for (o = 0; o <= d; o++)
puppy->name[o] = name[o];
puppy->age = age;
puppy->owner = malloc(g * sizeof(puppy->owner));
if (puppy->owner == NULL)
{
free(puppy->owner);
free(puppy->name);
free(puppy);
return (NULL);
}
for (o = 0; o <= g; o++)
puppy->owner[o] = owner[o];
return (puppy);
}
