#include "main.h"

/**
*swap_int - swaps two integer value
*@a: first integer
*@b: second integer
*Return: nothing
*/

void swap_int(int *a, int *b);
{
	int ins = *a;
	*a = *b;
	*b = ins;
}
