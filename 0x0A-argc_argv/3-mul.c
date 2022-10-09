#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 *main - pints the multiplication of two integer
 *@argc: count arguments
 *@argv: arguments
 *
 *Return: Always 0 
 */

int main(int argc, char *argv[])
{
int a, b, mul;

if (argc != 3)
printf("ERROR\n");

else
{
a = atoi(argv[1]);
b = atoi(argv[2]);
mul = a *b;
printf("%d\n", mul);
}
return (0);
}

