#include <stdio.h>

int main()
{
float celsius, fahrenheit;

scanf("%f", &celsius);

fahrenheit = (celsius * 9 / 5) +32;
printf("Fahrenheit=%g", fahrenheit);

return 0;
}
