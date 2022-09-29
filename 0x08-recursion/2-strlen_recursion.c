#include "main.h"

/**
 *_strlen_recursion - print the length of a string
 *@s: String 
 * 
 *Return: length of String
 */

int _strlen_recursion(char *s)
{
int sum = 0;

if (*s != '\0')
{
sum++;

sum += _strlen_recursion(s + 1);
}
return (sum);

}

