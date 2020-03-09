#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Entry point
 * @d: d
 *
 */
void free_dog(dog_t *d)
{
	free(d);
}
