#include "3-calc.h"

/**
 * op_add - calculate the sum of two integers
 * @a: first integer
 * @b: second integer
 *
 *Return: sum of a and b
 */

int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - calculate the differene of two integers
 * @a: first integer
 * @b: second integer
 *
 *Return: the difference of a and b
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - calculate the product of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - calculates the division of two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the div of a and b
 */

int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - calculates the remainter of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the remainder of a and b
 */

int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}

