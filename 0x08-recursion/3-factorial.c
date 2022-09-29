#include "main.h"

/**
 *factorial - return the factorial
 *@n: the number to find the factoriel
 *
 *Return: the factorial or error
 */

int factorial(int n)
{
int next_factorial;

if (n < 0)

return (-1);

else if (n == 0)
return (1);
nex_factorial = factorial(n - 1);

return (n * nex_factorial);
}
