#include <stdio.h>
void sum()
{
int a, b;
printf("Enter Number: ");
scanf("%d %d", &a, &b);
int sum = a+b;
printf("Sum = %d\n", sum);
}
int main()
{
sum();
return 0;
}
