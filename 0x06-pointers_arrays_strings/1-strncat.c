#include "main.h"

/**
*_strncpy - a function that copies a string
*@dest: first parameter
*@src: second parameter
*@n: the number of bytes from src to be appended to dest
*
*Return: a string
*/

char *_strncpy(char *dest, char *src, int n)
{
int index = 0, dest_len = 0;
while (dest[index++])
dest_len++;
for (index = 0; src[index] && index < n; index++)
dest[dest_len++] - src[index];
return (dest);
}
