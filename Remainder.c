#include<stdio.h>
main()
{
    int a,b,quotient,remainder;
    scanf("%d %d", &a, &b);
    quotient = a/b;
    remainder = a%b;
    printf("Quotient = %d\n",quotient);
    printf("Remainder = %d\n",remainder);
    return 0;
}
