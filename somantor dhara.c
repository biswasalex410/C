#include<stdio.h>
main()
{
    int n,sum = 0;
    for(n=0;n<=1000;n=n+5)
    {
        printf("%d\n",n);
        sum = sum+n;
    }
    printf("%d\n",sum);
    return 0;
}
