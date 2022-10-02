#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 *main - pints the multiplication of two integer
 *@argc: count arguments
 *@argv: arguments
 *
 *Return: Always 0 if true, 1 if false
 */

int main(int argc, char *argv[])
{
int a, b;
if (argc == 1)
{
a = atoi(argv[1]);
b = atoi(argv[2]);
printf("%d\n", a * b);
return (0);
}
(void) argc;
printf("ERROR\n");
return (0);
}

