#include <stdio.h>
#include "main.h"

/**
*rev_string -  reverses a string
*@s: pointer to String
*
*Return: void()
*/

void rev_string(char *s)
{
int i, j, k, temp;
int i;
while (s[i] != '\0')
{
i++;
}
k = 0;
j = i - 1;
while (k < j)
{
temp = s[k];
s[k] = s[j];
s[j] = temp;
k++;
j--;
}
}
