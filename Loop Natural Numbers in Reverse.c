#include<stdio.h>
main()
{
    int i,n,rev=0,r;
    printf("Enter the Number: ");
    scanf("%d",&n);
    for(i=1;n!=0;i++)
    {
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    printf("%d\n",rev);
    return 0;
}
