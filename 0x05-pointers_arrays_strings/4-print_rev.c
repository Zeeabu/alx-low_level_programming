#include <stdio.h>
#include <string.h>
#include "main.h"

/**
*print_rev - a function that prints a string, in reverse followed by a newline
*@s: string
*Return: Always 0
*/

void print_rev(char *s)
{
int len = strlen(s);
while (len--)
putchar(*(s + len));
putchar(10);
}
