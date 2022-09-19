#include <stdio.h>
#include "main.h"

/**
*puts2 - prints every other character
*@str: string
*
*Return: Always 0
*/

void puts2(char *str)
{
int i = 0;
while (*(str + i) != '\0')
if (1 % 2 == 0)
putchar(*(str + 1));
i++;
putchar(10);
}

