#include <stdio.h>
/**
 * main - Print size is not granduer
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;

printf("Size of char: %d byte(s)\n", sizeof(a));
printf("Size of int: %d byte(s)\n", sizeof(b));
printf("Size of long int: %d byte(s)\n", sizeof(c));
printf("Size of long long int: %d byte(s)\n", sizeof(d));
printf("Size of a float: %d byte(s)\n", sizeof(e));
return (0);
}
