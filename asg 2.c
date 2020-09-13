#include <stdio.h>
int main()
{
    int i,n;
    printf("How many number Enter: ");    scanf("%d",&n);
    for(n>0;n<=5;n++){
    scanf("%d",&n);
    }
    for(i=n; i<=n; i++)
    {
        if(i==n)
            break;
        printf("%d\n", i);
    }

    return 0;
}
