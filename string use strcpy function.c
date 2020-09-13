#include<stdio.h>
main()
{
    char source[25],target[25];
    printf("Enter Source String : ");
    gets(source);
    strcpy(target,source);
    printf("Target = %s",target);
}

