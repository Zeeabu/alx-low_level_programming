#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet
 *
 * Return: Always 0 success
 */

void print_alphabet_x10(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n * 10);
			_putchar('\n');
		}
}
