#include<stdio.h>
main()
{
    char str[100];
    gets(str);
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        printf("%c ",str[i]);
    }
}
