/*
 * File: 6-is_prime_number.c
 * Auth: Zee Tech
 */

#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 *is_divisible - checks if a number is divisible
 *@num: number to be checked
 *@div: the divisor
 *
 *Return: -0 if the number is divisible,
 *        -1 if the number is not divisible
 */

int is_divisible(int num, int div)
{
if (num % div == 0)
return (0);

