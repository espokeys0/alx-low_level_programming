#include <stdio.h>
#include <stdlib.h>

/**
 *main - function
 *@str: length of
 *@argv: number of argument
 *Return: Always 0
 */

int main(int argc, char *argv[])
{
int position, total, change, aux;
int coins[] = {25, 10, 5, 2, 1};

position = total = change = aux = 0;

if (argc != 2)
{
printf("ERROR\n");
return (1);
}

total = atoi(argv[1]);

if (total <= 0)
{
printf("0\n");
return (0);
}
}

