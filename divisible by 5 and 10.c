#include<stdio.h>
main()
{
    int n;
    scanf("%d", &n);
    if((n%5==0)&&(n%10==00))
    {
        printf("Number is divisible by 5 and 10\n");
    }
    else
    {
        printf("Number is not divisible by 5 and 10\n");
    }
    return 0;
}
