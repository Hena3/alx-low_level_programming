#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main - entry point
 *
 * Return:always return 0
 *
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last didit of %d is ", n);
if (n > 5)
{
printf(" is greater than 5");
}
if (n == 0)
}
printf("is 0");
}
if (n < 6 && n != 0)
{
printf(" less than 6 and not 0");
}
printf("\n");
return (0);
}
