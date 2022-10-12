#include "function_pointers.h"

/**
 * int_index - function that searche for an integer
 * @array: array to search
 * @size: size of the array
 * @cmp: pointer to the functions
 *
 * Return: index of the first element
 * the cmp function does not return 0 or -1 if no match is found
 * or size is negative
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array && cmp)
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
}
