#include<stdio.h>
main()
{
    char s1[25];
    printf("Enter String: ");
    gets(s1);
    int len;
    len = strlen(s1);
    printf("Length: %d",len);
}
