#include<stdio.h>
main()
{
    int n,num;
    printf("Enter the Number: ");
    scanf("%d",&n);
    while(n!=0)
    {
       num=n%10;
       n=n/10;
    }
    printf("first digit = %d\n",num);
    return 0;
}
