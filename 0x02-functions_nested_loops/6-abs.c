#include <stdio.h>
/**
 *_abs - a funtion that computes the absolute value of integer
 *@c: is the integer that will be use forthe argument of the function
 *Return: 0
 */
int _abs(int c)
{
if (c > 0 || c == 0)
{
return (c);
}
else
return (c * -1);
}
