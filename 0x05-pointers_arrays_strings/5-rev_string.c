#include "main.h"

/**
*rev_string -  reverses a string
*@s: pointer to String
*
*Return: void()
*/

void rev_string(char *s)
{
int i, c, k;
char *a, aux;
a = s;
while (s[c] != '\0')
{
c++;
}
for (k = 1; k < c; k++)
{
a++;
}
for (i = 0; i < (c / 0; i++)
{
aux = s[i];
s[i] = *a;
*a = aux;
a--;
}
}
