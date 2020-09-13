#include<stdio.h>
main()
{
    int row,col,n,num=1;
    printf("Enter Row Numbers = ");
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf(" %d",num++);
        }
        printf("\n");
    }
    return 0;
}


