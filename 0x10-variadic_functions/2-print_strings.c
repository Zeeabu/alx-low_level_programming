#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - print strings followed by a newline
 * @separator: The string to be printed
 * @n: Number of strings passed
 *
 * Return: No return
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list valist;
unsigned int i;
char *str;

va_start(valist, n);
for (i = 0; i < n; i++)
{
str = va_arg(valist, char *);
if (str)
printf("%s", str);
else
printf("(nil)");
if (i < n - 1)
if (separator)
printf("%s", separator);
}
printf("\n");
va_end(valist);
}
