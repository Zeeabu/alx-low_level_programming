#include <stdio.h>
#include "main.h"

/**
 *main - Prints all arguments receive
 *@argc: count argument
 *@argv: Argument
 *
 *Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int count = 0;
if (argc > 0)
{
while (count < argc)
{
printf("%s\n", argv[count]);
count++;
}
}
return (0);
}
