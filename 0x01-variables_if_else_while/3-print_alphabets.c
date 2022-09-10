#include <stdio.h>
/**
 *main - 3-print_alphabets.c
 *
 *Return: Always (Success)
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (ch = 'A'; ch <= 'Z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
