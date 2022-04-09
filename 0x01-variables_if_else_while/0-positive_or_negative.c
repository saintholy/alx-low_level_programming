#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n==0)
{
printf("number is zero\n", n);
}

else if (n<0)
{
printf("number is negative\n", n);
}

else
{
printf("number is positive\n", n);
}

return (0);
}



















