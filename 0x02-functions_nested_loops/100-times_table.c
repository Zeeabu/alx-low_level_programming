#include "main.h"

/**
 * print_times_table -  Prints the n timestable
 * @n: number to print
 * Return: if n is greater than 15 or less than 0
 *	the function  should not print anything
 */

void print_times_table(int n)
{
	for (n = '0'; n <= 15; n++)
	if ((n * 1) + '0')
		n++;
		{
		putchar(n);
		putchar(',');
		putchar(' ');
		putchar('\n');
		}
}
