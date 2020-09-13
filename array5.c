#include <stdio.h>

int main()
{
    int i, n, cnt = 0, cnt2=0, arr[100];
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++)
    {
        if(arr[i]%2 ==0) cnt++;
        else cnt2++;
    }

    printf("Total Even: %d\n", cnt);
    printf("Total Odd: %d\n", cnt2);

    return 0;
}



