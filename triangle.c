#include <stdio.h>

main()
{
    int m,n,o,sum;

    printf("Enter the angles of triangle:");
    scanf("%d %d %d",&m,&n,&o);

    sum=m+n+o;

    if(sum == 180 && m != 0 && n != 0 && n != 0)
    {
        printf("Triangle is valid.");
    }
    else
    {
        printf("Triangle is not valid.");
    }

    return 0;
}
