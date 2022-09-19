#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*print_rev - print String in to revers order
*@s: String to reverse
*Return: nothing
*/

void print_rev(char *s)
{
	int len = srtlen(s); while (len--)
	putchar(*(s + len));
	putchar(10);
}
