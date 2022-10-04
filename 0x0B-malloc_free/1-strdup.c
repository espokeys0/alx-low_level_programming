#include "main.h"
/**
 *_strdup - return a pointer to a newly allocated
 *space in memory, which a copy of the
 *string given as a parameter
 *@str: string 
 *
 *Return: NULL 
 */

char *_strdup(char *str)
{
char *cpy;
int index, len;

if (str == NULL)
return (NULL);

for (index = 0; str[index]; index++)
len++;

cpy = malloc(sizeof(char) * (len + 1));

if (cpy = NULL)
return (NULL);

for (index = 0; str[index]; index++)
{
cpy[index] = str[index];
}

cpy[len] = '\0';

return (cpy);
}
