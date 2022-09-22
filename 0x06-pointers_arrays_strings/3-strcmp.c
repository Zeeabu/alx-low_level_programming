#include "main.h"

/**
* _strcmp - a function that compares two strings
*@s1: first pointer
*@s2: second pointer
*
*Return: if str1 < str2, the negative difference of the first unmatched char
*        if str1 == str2, 0
*        if str1 > str2, the positive difference of the first unmatched char
*/

int _strcmp(char *s1, char *s2)
{
int i = 0, diff = 0;
while (1)
{
if (s1[i] == '\0' && s2[i] == '\0')
break;
else if (s1[i] == '\0')
{
diff = s2[i];
break;
}
else if (s2[i] == '\0')
{
diff = s1[i];
break;
}
else if (s1[i] != s2[i])
{
diff = s1[i] - s2[i];
break;
}
else
i++;
}
return (diff);
}

