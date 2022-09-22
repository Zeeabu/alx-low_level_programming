#include "main.h"

/**
*_strncpy - C function that copies a string, including the
* terminating null byte, using at most an inputted number of bytes.
* if the lenght of the source string is less than the maximum byte number,
* the remainder of the destination string is filled with null bytes.
* work identically to the standard library function 'strncpy'.
*@dest: the buffer storing the string copy
*@src: the string source
*@n: the maximum number of bytes to copied
*
*Return: returns
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for (i = 0; i < n; i++)
dest[i] = '\0';
return (dest);
}
