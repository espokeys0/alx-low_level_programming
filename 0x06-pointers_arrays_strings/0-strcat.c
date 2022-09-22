#include "main.h"
#include <string.h>
#include <stdio.h>

/**
*_strcat - concatenates two strings
*@dest: String
*@src: String
*Return: character
*/

char *_strcat(char *dest, char *src)
{
int index = 0, dest_len = 0; while (dest[index++])
	{
		dest_len++;
	}

	for (index = 0; src[index]; index++)
	{
		dest[dest_len++] = src[index];
	}

	return (dest);
}

	
