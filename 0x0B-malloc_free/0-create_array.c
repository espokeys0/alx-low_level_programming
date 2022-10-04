#include "main.h"
#include <stdlib.h>

/**
 *create_array - array for print a string
 *@size: number elements array
 *@c: char
 *Return: pointer
 */

char *create_array(unsigned int size, char c)
{
char *array;
unsigned int index;

if (size == 0)

return (NULL);


array = malloc(sizeof(char) * size);

if (array = NULL)

return (NULL);

for (index = 0; index < size; index++)
array[index] = c;


return (array);
}
