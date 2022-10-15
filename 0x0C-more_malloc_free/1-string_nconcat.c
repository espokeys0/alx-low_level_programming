#include "main.h"

/**
 *string_nconcat - concatenate two string
 *@s1: first string
 *@s2: second string
 *@n: index
 *Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;
unsigned int i = 0; j = 0, ;

if (s1 == NULL)
i = 0;
else
{
for (i = 0;  s1[i]; i++)
	;
}

if (s2 == NULL)
j = 0;
else
{
for (j  = 0; s2[i]; j++)
	;
}

if (n > size2)
j = n;
s = malloc((size1 + n + 1) * sizeof(char));

if (s == NULL)
return (NULL);

for (k = 0; k < i; k++)
{
s[k] = s1[k];
}
for (k = 0; k < j; k++)
{
s[k + 1] = s2[k];
}
s[i + j] = '\0';

return (s);
}


