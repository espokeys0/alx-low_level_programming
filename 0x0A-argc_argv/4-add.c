#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"


/**
 *check_num - check - string there are digit
 *@str: array str
 *
 *Return: Always 0
 */

int check_num(char *str)

{
unsigned int count;

count = 0;
while (count < strlen(str))
{
if (isdigit(str[count]))
{
return (0);
}
count++;
}
return (1);
}



#include <stdio.h>
#include "main.h"

/**
 *main - print the name of the program
 *@str: count arguments
 *@argv: arguments
 *Return: Always 0
 */

int main(int argc, char *argv[])
{
int count;
int str_to_int;
int sum = 0;

count = 1;

while (count < argc)
{
if (check_num(argv[count]))

{
str_to_int = atoi(argv[count]);
sum += str_to_int;
}
else
{
printf("ERROR\n");
return (1);
}

count++;
}
printf("%d\n", sum);

return (0);

(void) argc;
printf("%s\n", argv[0]);
return (0);
}

