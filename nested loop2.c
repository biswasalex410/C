#include<stdio.h>
main()
{
    int n,sum,start,diff,end;
    scanf("%d %d %d",&start, &diff, &end);
    for(n=start,sum=0;n<=end;n=n+diff){
        sum = sum+n;
    }
    printf("Sum is %d\n",sum);
    return 0;
}
