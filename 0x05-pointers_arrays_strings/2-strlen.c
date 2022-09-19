#include "main.h"

/**
* _strlen -  returns the length of a string
*@s: String
*Return: return length as integer
*/

int _strlen(char *s)
{
	int len = 0;	

	while (*(s + len) != '\0')
		len++;

	return (len);
}
