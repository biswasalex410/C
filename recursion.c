#include <stdio.h>

int loopFun(int n)
{
    if( n==1 ) return 1;
    else return n + loopFun(n-1);
}

int main()
{
    int ans = loopFun(5);
    printf("Sum: %d\n", ans);
}



