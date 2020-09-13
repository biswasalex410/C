#include <stdio.h>
main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c",&ch);
    if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
        printf("Character %c is an Alphabet",ch);
    else
        printf("Character %c is not an Alphabet",ch);

    return 0;
}
