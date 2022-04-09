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

printf(("last digit of %d is %d and is greater than 5\n", n, n % 10,
((n % 10)) == 0) ? "and is 0"
: (((n % 10) > 5) ? "and is greater than 5"
: "and is less than 4 and not 0"));

return (0);
}
