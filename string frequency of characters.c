#include<stdio.h>
main()
{
    char str[100],ch;
    printf("Enter the String: ");
    gets(str);
    printf("Enter the Word: ");
    scanf("%c",&ch);
    int i,count=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i] == ch)
        {
            count++;
        }
    }
    if(count == 0)
    {
        printf("Not found the charecter");
    }
    else
    {
        printf("Yes, %c is found %d times in %s\n",ch,count,str);
    }
}
