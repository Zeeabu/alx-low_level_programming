#include "main.h"

/**
 *_isupper - This is a function to check uppercase alphabets
 *@c: integer input
 *Return: 1 whether it is, 0 otherwise
 */
int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'));
{
return (1);
}
return (0);
}
