#include <stdio.h>
int main()
{
int lenght, breadth;
scanf("%d %d", &lenght, &breadth);

int area = lenght * breadth;
int perimeter = 2 * (lenght + breadth);

printf("Area=%d, Perimeter=%d", area, perimeter);

return 0;
}
