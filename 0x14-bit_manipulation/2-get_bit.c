#include "main.h"

/**
 *get_bit - Get value of a bit at a given index
 *@n: the bit
 *@index: the index to get the value at - indexs start at 0.
 *
 *Return: if an error occurs - -1
 *otherwise - the value of bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 0))
return (-1);

if ((n & (1 << index)) == 0)
return (0);

return (1);
}
