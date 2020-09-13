#include <stdio.h>

int main()
{
    int n, sum = 0;
    scanf("%d", &n);

    while( n!=0 )
    {
        int temp = n%10;
        sum = sum + temp;
        n = n/10;
    }

    printf("Digit Sum: %d\n", sum);
    return 0;
}

