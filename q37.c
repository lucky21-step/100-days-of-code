#include <stdio.h>
int main()
{
int a, b, lcm;
scanf("%d %d", &a, &b);
lcm = (a > b) ? a : b;
while (lcm % a != 0 || lcm % b != 0)
{
lcm++;
}
printf("%d", lcm);
return 0;
}
