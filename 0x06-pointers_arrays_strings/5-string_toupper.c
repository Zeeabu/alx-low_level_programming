#include "main.h"

/**
*string_toupper - changes all lowercase letters to uppercase
*@str: parameter
*
*Return: returns a character
*/

char *string_toupper(char *)

{

int index = 0;
while (str[index++])
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] -= 32;
index++;
}
return (str);
}
