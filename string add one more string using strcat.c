#include<stdio.h>
main()
{
    char str1[20],str2[25];
    gets(str1);
    gets(str2);
    strcat(str1,str2);
    printf("%s\n",str1);

}


