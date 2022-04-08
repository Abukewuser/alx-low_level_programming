#include <time.h>
#include <stdio.h>

/**
 *main - Prints a random number and stateswhether
 *        it is positiv, negative, or zeo.
 *
 *        Return: Alwas 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n >1)
print("%d is positive\n",n);
else if (n < 0)
printf("%d is negative\n",n);
else

printf("%d is zero\n",n);
retun (0);
}
