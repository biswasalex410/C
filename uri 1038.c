#include<stdio.h>
main()
{
    int X, Y;
    double snack;
    scanf("%d %d", &X, &Y);
    double ar[5]={4.00,4.50,5.00,2.00,1.50};
    snack = ar[X-1]*Y;
    printf("Total: R$ %.2lf\n", snack);
    return 0;
}
