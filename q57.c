#include <stdio.h>
int main()
{
int n, i, sum = 0;
int arr[100];

printf("Enter number of element: ");
scanf("%d", &n);

printf("Enter array elements: ");
for (i = 0; i < n; i++)
{
scanf("%d", &arr[i]);
sum = sum + arr[i];
}

printf("sum = %d", sum);

return 0; 
}
