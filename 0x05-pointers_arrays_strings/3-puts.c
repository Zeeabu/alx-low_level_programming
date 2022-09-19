#include <stdio.h>
#include "main.h"

/**
*_puts - function that prints a string follow by a newline to stdout
*@str: string to print
*
*Description: print a string
*Return: on success, return no error
*/

void _puts(char *str)
{
int i = 0;
while (*(str + i) != '\0')
{
putchar(*(str + i));
i++;
}
putchar(10);
}

