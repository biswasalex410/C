#include<stdio.h>
main()
{
    int a,b,sum,sub,mul,div,mod;
    scanf("%d %d", &a, &b);
    sum = a+b;
    sub = a-b;
    mul = a*b;
    div = a/b;
    mod = a%b;
    printf("Sum = %d\nSub  = %d\nMul = %d\ndiv = %d\nMod = %d", sum, sub, mul, div, mod);
    return 0;
}
