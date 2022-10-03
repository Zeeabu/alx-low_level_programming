#include "main.h"

/**
 *_strlen - to count the array
 *@s: array of element
 *Return: 1
 */

int *_strlen(char *s)
{
unsigned int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);

/**
 *_strcpy - copy array
 *@src: array of element
 *@dest: dest
 *Return: dest
 */

char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}

/**
 *_strdup - returns a pointer
 *to a newly allocated space in memory
 *@str: string to be copied
 *@Return: NULL in case of error,
 *pointer to allocated space
 */

char *_strdup(char *str)
{
char *str;
int index, len;

if (str == '\0')
return (NULL);

for (index =0; str[index]; index++)
len++;

cpy = malloc(size * sizeof(char) * (len + 1));
if (cpy == '
return (NULL);

for (index =0; str[index]; index++)

