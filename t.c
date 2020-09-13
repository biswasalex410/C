#include <stdio.h>

int x = 10;

int sumFun()
{
    x = 5;
}

int main()
{
    sumFun();
    printf("%d\n", x);
}
