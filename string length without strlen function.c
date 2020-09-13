#include<stdio.h>
main()
{
    char str[25];
    printf("Enter String: ");
    gets(str);
    int i,len=0;
    for(i=0;str[i]!='\0';i++)
    {
        len++;
    }
    printf("Length : %d",len);
}
