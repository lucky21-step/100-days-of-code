#include<stdio.h>

int main()
{
int seconds, hours, minutes, remainingSeconds;

scanf("%d", &seconds);

hours = seconds / 3600;
remainingSeconds = seconds % 3600;
minutes = remainingSeconds / 60;
remainingSeconds = remainingSeconds % 60;

printf("%d:%d:%d", hours, minutes, remainingSeconds);

return 0;
}
