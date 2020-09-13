#include<stdio.h>
main()
{
    int input,i;
    printf("Enter Any Number = ");
    scanf("%d",&input);
    for(i=1; i<=10; i++)
        printf("\n%dX%d=%d",input,i,input*i);
    return 0;
}
