#include<stdio.h>
main()
{
    int i,n=0;
    double a;
    for(i = 0; i < 6; i++){
        scanf("%lf", &a);
        if(a >= 0)n++;
    }
    printf("%d valores positivos\n", n);
    return 0;
}
