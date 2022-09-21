#include "main.h"

/**
* _strcmp - a function that compares two strings
*@s1: first pointer
*@s2: second pointer
*
*Return: if str1 < str2, the negative difference of the first unmatched char
*        if str1 == str2, 0
*        if str1 > str2, the positive difference of the first unmatched char
*/

int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
*s1++;
*s2++;
}
return (*s1 - *s2);
}
