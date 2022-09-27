#include "main.h"

/**
*_strch - locates a character in a string
*@s: string to check
*@c: character to check for
*
*Return: pointer to spot in swith c or null
*/

char *_strchr(char *s, char c)
{
int i;

for (i = 0; *(s + i); i++)
{
if (*(s + i) == c)
return (s + i);
}
if (*(s + i) == c)
return (s + i);
return (0);
}
