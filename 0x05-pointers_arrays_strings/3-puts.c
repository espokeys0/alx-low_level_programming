#include "main.h"
#include <stdio.h>

/**
*_puts - prints a string
*@str: String to print
*
*Description: print a String
*on seccess: return no error
*/

void _puts(char *str)
{
	int i = 0; while (*(str + i) != '\0')
{
	putchar(*(str + i));
	i++;
}
	putchar(10);
}
