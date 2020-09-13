#include <stdio.h>

int loopFun(int arr[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d\n", arr[i]);
    }
}

int main()
{
    int i, n, arr[100];
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    loopFun(arr, n);
}


