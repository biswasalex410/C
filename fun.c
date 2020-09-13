#include <stdio.h>

int sumFun(int x, int y)
{
    int sum = x+y;
    return sum;
}

int main()
{
    int a=5, b=6, ans;

    ans = sumFun(a,b);

    printf("Sum: %d\n", ans);
}
