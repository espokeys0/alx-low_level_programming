#include "main.h"

/**
 *_pow_recursion - Return the value of x raised to the power of y
 *@x: integer
 *@y: integer
 *
 *Return: power recursion
 */

int _pow_recursion(int x, int y)
{

if (y < 0)
{
return (-1);
}
else if (y != 0)
return (x * _pow_recursion(x, y - 1));

else
return (1);
}
