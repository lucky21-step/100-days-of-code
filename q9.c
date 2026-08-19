#include<stdio.h>
#include<math.h>
 int main()
{
double  P, R, T;
double simpleInterest, compoundInterest;

scanf("%lf %lf %lf", &P, &R, &T);

simpleInterest = (P * R * T) / 100;
compoundInterest = P * (pow(1 + R / 100, T) - 1);

printf("simple Interest=%.0f, compound Interest=%.2f\n", simpleInterest, compoundInterest);

return 0;
}
