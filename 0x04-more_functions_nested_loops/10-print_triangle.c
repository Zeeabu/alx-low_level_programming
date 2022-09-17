#include <stdio.h>

/**
* main - check the code
*
* Return: Always 0.
*/

int main(void)
{
for (int i = 0; i < 3; i++)
{
for (int j = 0; j < i; j++)
{
printf("#");
}
printf("\n");
}
}
