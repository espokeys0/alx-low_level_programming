#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*_strncat - concatenates two strings
*@dest: string to be appended upon
*@src: string to be completed at end of dest
*@n: integer parameter
*Return: return new concatenated string
*/

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
