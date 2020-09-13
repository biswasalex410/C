#include<stdio.h>
int main()
{
    int i, sum = 0, a[5];
    printf("Enter Five numbers : ");
    for(i=0; i<5; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<5;i++)
    {
        sum = sum+a[i];
    }
    printf("The Sum is : %d\n", sum);
    printf("The Average is : %.2f\n",(float)sum/5);
    return 0;
}
