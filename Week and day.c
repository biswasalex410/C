#include<stdio.h>
main()
{
    int n;
    printf("Enter day number:");
    scanf("%d", &n);
    if(n==1)
        printf("Sunday");
    else if(n==2)
    printf("Monday");
        else if(n==3)
        printf("Tuesday");
        else if(n==4)
        printf("Wednessday");
        else if(n==5)
        printf("Thursday");
       else if(n==6)
        printf("Friday");
        else if(n==7)
        printf("Saturday");
    else printf("Invalid Input! Please enter week number between 1-7");
    return 0;
}

