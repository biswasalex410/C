#include<stdio.h>
main()
{
    int n,s=0,i=1;
    printf("Enter a Natural Number = ");
    scanf("%d",&n);
    while(i<=n)
    {
        s=s+2*i-1;
        i++;
    }
    printf("Sum is %d",s);
    return 0;
}
