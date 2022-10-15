#include "main.h"

/**
 *malloc checked - array prints a string
 *@p: numberof memory
 *Return: void
 */

void *malloc_checked(unsigned int b)
{
void *p;

p = malloc(b);

if (p == NULL)
{
exit(98);
}

return (p);
}
