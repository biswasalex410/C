#include<stdio.h>
main()
{
    int i,j,n=3;
    for(j=0;j<5;j++){
        for(i=0;i<j+1;i++){
        printf(" *");
        }
        printf("\n");
    }
    return 0;
}
