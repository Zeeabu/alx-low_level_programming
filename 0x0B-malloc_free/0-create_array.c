#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - Afunction that creates an array of chars
 *@size: number of elements in the array
 *@c: character to print
 *Return: NULL if the size is 0,
 *a pointer to the array if it fails or NULL
 */

char *create_array(unsigned int size, char c)
{
unsigned int position;
char *buffer;
if (size == 0)
{
return (NULL);
}
buffer = (char *) malloc(size * sizeof(c));
if (buffer == 0)
{
return (NULL);
}
else
{
position = 0;
while (position < size)
{
*(buffer + position) = c;
position++;
}
return (buffer);
}
}

