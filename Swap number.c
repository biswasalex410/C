#include<stdio.h>
main()
{
    int a,b,t;
    scanf("%d %d", &a, &b);
    t = a;
    a = b;
    b = t;
    printf("After swaping\na = %d\nb = %d\n",a,b);
    return 0;
}
