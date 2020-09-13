#include<stdio.h>
main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if(a>b)
    {
        if(a>c)
            printf("%d is large",a);
        else
            printf("%d is large",c);
    }
    else if(b>c)
    {
        if(b>a)
            printf("%d is large",b);
        else
            printf("%d is large",a);
    }
    else
        printf("%d is large",c);
    return 0;
}
