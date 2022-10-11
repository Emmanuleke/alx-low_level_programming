#include "dog.h"
#include <stdio.h>
/**
 * free_dog - frees up memory
 * @d: memory tobe freed
 */

void free_dog(dog_t *d)
{
if (d == NULL)
return (NULL);
free(d->owner);
free(d->name);
free(d);
}
