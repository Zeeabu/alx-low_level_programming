#include "main.h"

/**
* _puts_recursion - a function that that prints a string
*@s: string to print
*
*Return: Always 0 success
*/

void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
