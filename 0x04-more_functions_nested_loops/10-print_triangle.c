#include <stdio.h>

/**
* main - check the code
* @size: size of the traingle
* Return: Always 0.
*/

int main(void)
{
int i, j;

for (i = 0; i < 9; i++)
{
for (j = 0; j < i; j++)
{
putchar('#');
}
putchar('\n');
}
}
