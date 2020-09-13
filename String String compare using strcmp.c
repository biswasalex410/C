#include<stdio.h>
main()
{
    char str1[50],str2[50];
    printf("Enter String1: ");
    gets(str1);
    printf("Enter String2: ");
    gets(str2);
    int i,j,len1=0,len2=0;
    for(i=0;str1[i]!='\0';i++)
    {
        len1++;
    }
    for(j=0;str2[j]!='\0';j++)
    {
        len2++;
    }
    if(str1[i]>str2[j])
    {
        printf("String 1 is Bigger");
    }
    else printf("String 2 is Bigger");
}
