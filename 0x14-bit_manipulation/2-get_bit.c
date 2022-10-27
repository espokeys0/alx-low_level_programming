#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *get_bit - Get value of a bit at a given index
 *@n: the bit
 *@index: the index to get the value at - indexs start at 0.
 *
 *Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 0))
return (-1);

if (n == 0 && index < 64)
return (0);
 for (i = 0; i <= 63; n >>= 1, i++)
{
if (index == i)
{
return (n & 1)
}
}

return (-1);
}
