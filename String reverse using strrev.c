#include<stdio.h>
main()
{
    char str[25];
    printf("Enter String: ");
    gets(str);
    strrev(str);
    printf("%s",str);
}
