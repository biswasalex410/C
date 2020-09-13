#include<stdio.h>
main()
{
    int n,row,spc,col,num=1;
    printf("Enter Row Numbers = ");
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        for(spc=n-row; spc>=1; spc--)
        {
            printf(" ");
        }
        for(col=1; col<=row; col++)
        {
            printf("%d ",num++);
        }
        printf("\n");
    }
    return 0;
}
