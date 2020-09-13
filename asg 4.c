#include <stdio.h>

int main()
{
    int i,j,k;
    printf("Enter Start Number :");
    scanf("%d",&i);
    printf("Enter End Number :");
    scanf("%d",&k);
    for (j = i; j <= k; j++)
    {
        if(j%2 == 0)
        {
            printf("%d ", j);
        }
    }
    return 0;
}
