#include "main.h"

/**
* cap_string - function that capitalise first character of a word
* @str: string parameter to capitalise
* Return: returns the capitalise string
*/

char *cap_string(char *str)
{
int index = 0;
while (str[++index])
{
while (!(str[index] >= 'a') && (str[index] <= 'z'))
index++;
if (str[index - 1] == ' ' ||
		str[index - 1] == '\t' ||
		str[index - 1] == '\n' ||
		str[index - 1] == ',' ||
		str[index - 1] == ';' ||
		str[index - 1] == '.' ||
		str[index - 1] == '!' ||
		str[index - 1] == '?' ||
		str[index - 1] == '"' ||
		str[index - 1] == '(' ||
		str[index - 1] == ')' ||
		str[index - 1] == '{' ||
		str[index - 1] == '}')
	str[index] -= 32;
}
return (str);
}

