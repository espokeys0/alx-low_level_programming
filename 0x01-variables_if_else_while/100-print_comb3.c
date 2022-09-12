#include <stdio.h>
/**
*main - print if the number is positive, zero, or negative
*
*Description: using the main function
*this program prints "programming is positive, zero, or negative
*Return: 0
*/
int main(void)
{int i,j;
for (i = 0; i <= 9; i++)
{for (j = 1; j <= 9; j++)
{if (j > i)
{putchar(i + '0');
putchar(j + '0');
if (i != 8)
{putchar(',');
putchar(' '); } } } }
putchar('\n');
return (0); }
