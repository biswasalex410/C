#include<stdio.h>
main()
{
    char str[100];
    printf("Enter String: ");
    gets(str);
    int i = 0, vow = 0, cons = 0, dig = 0, space = 0;
    for(i = 0; str[i]!= '\0'; i++)
    {

        if(str[i]>='A'&&str[i]<='Z' || str[i]>='a'&&str[i]<='z')
        {
            if(str[i]=='A'|| str[i]=='a' || str[i]=='E' || str[i]=='e'|| str[i]=='I'|| str[i]=='i' || str[i]=='O'|| str[i]=='o' || str[i]=='U'|| str[i]=='u')
            {
                vow++;
            }
            else
            {
                cons++;
            }
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            dig++;
        }
        else if(str[i]==' ')
        {
            space++;
        }
        else
        {
            continue;
        }
    }
    printf("Vowel = %d\nConsonant = %d\nDigit = %d\nSpace = %d",vow,cons,dig,space);
    return 0;
}
