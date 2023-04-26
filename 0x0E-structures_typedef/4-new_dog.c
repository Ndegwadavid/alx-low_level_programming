#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: a dog object LOL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int d, cujo1, cujo2;
	dog_t *ndog;
	char *a, *b;

	cujo1 = 0;
	for (d = 0; name[d] != '\0'; d++)
		cujo1++;
	cujo2 = 0;
	for (d = 0; owner[d] != '\0'; d++)
		cujo2++;
	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	a = malloc((cujo1 + 1) * sizeof(char));
	if (a == NULL)
	{
		free(ndog);
		return (NULL);
	}
	for (d = 0; d < cujo1; d++)
		a[d] = name[d];
	a[d] = '\0';
	ndog->name = a;
	ndog->age = age;
	b = malloc((cujo2 + 1) * sizeof(char));
	if (b == NULL)
	{
		free(a);
		free(ndog);
		return (NULL);
	}
	for (d = 0; d < cujo2; d++)
		b[d] = owner[d];
	b[d] = '\0';
	ndog->owner = b;
	return (ndog);
}
