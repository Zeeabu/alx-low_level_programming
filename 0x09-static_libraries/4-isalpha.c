#include "main.h"
/**
 *_isalpha - function to check if c is a letter, lowercase or uppercase
 *@c: single letter input
 *Return: 1 if c is a letter (lowercase or uppercase), otherwise 0
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
return (0);
}

