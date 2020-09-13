#include<stdio.h>
main()
{
    char str1[50],str2[20];
    printf("Enter String1: ");
    gets(str1);
    printf("Enter String2: ");
    gets(str2);
    int i,j,len=0;
    for(i=0;str1[i]!='\0';i++)
    {
        len++;
    }
    for(j=0;str2[j]!='\0';j++)
    {
        str1[len+j]=str2[j];
    }
    printf("%s",str1);
}
