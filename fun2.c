#include <stdio.h>

int loopFun(int n)
{
    int i;
    for(i=1; i<=n; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
}

int main()
{
    loopFun(10);
    loopFun(4);
    loopFun(6);
    loopFun(3);
}

