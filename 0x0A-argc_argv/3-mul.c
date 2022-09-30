#include <stdlib.h>
#include <stdio.h>

/**
 *main -Prints the multiplication of two numbers
 *@argc: count argument
 *@argv: Argument vector
 *
 *Return: 0 if true, 1 if false
 */

int main(int argc, char *argv[])
{
int index, multiplication;
multiplication = 1;
if (argc < 3)
{
printf("Error\n");
return (1);
}
for (index = 1; index < argc; index++)
{
multiplication = multiplication *atoi(argv[index]);
}
printf("%d\n", multiplication);
return (0);
}
