#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - prints informations about a dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner name
 */


struct dog
{
char *name;
float age;
char *owner;
};


/**
* dog_t - Typedef for struct dog
*/


typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *str);
char *_strcopy(char *dest, char *src);


#endif
