#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - alloctate memory using malloc
 * @b: memory to allocate
 *
 *Return: pointer to allocated memory or normal termination process if error
 */

void *malloc_checked(unsigned int b)
{
void *p;

p = malloc(b);
if (p == NULL)
exit(98);
return (p);
}

