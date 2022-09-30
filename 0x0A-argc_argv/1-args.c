#include <stdio.h>
#include "main.h"

/**
 *main - Prints number of arguments passed
 *@argc: Count argument
 *@argv: Argument
 *
 *Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /* ignore argv */
printf("%i\n", argc - 1);
return (0);
}
