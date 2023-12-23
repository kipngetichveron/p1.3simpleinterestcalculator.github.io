#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
float P, R, SI;
int T;

printf("Enter P, R and T:");
scanf("%f %f %d", &P, &R, &T);
SI = (P*R*T)/100;

printf("Principle = %.2f\n", P);
printf("Rate = %.2f\n", R);
printf("Time = %d\n", T);
printf("Simple interest = %.2f", SI);

return 0;
}

