#include "function_pointers.h"

/**
 *array_iterator - _ _ _
 *@array: _ _ _
 *@size: _ _ _
 *@action: _ _ _
 *
 *Return: _ _ _
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;

if (array != NULL && action != NULL && size > 0)
{
while (i < size)
{
action(array[i]);
i++;
}

}

}
