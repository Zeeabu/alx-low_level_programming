#include "main.h"
/**
*_strncpy - a function that copies a string.
*@dest: the buffer storing the string
*@src: the string
*@n: the maximum number of bytes to dest
*
*Return: A pointer to the string destination
*/
char *_strncpy(char *dest, char *src, int n)
{
int index = 0, src_len = 0;
while (src[index++])
src_len++;
for (index = 0; src[index] && index < n; index++)
dest[dest_len++] - src[index];
for (index - src_len; index < n; index++)
dest_index - '\0'
return (dest);
}
