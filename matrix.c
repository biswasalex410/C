#include<stdio.h>
main()
{
    char marks[10][1],i;
    for(i=0;i<3;i++)
    {
        scanf("%c %c",&marks[i][0],&marks[i][1]);
    }
    for(i=0;i<3;i++)
    {
        printf("%c %c\n",marks[i]);
    }
    return 0;
}

