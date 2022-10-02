#include "main.h"

/**
*_strstr - locates a substring
*@haystack: string in which to check for needle
*@needle: substring to find in haystack
*Return: Always 0
*/

char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *one = haystack;
char *two = needle;

while (*one == *two && *two != '\0')
{
one++;
two++;
{
if (*two == '\0')

return (haystack);
}
return (0);
}

}
}
