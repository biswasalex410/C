#include<stdio.h>
int main()
{
    int x = 5, *ptr;
    ptr = &x;
    printf("%d\n", x);
    printf("%u\n", &x);
    printf("%d\n", ptr);
    printf("%u\n", *ptr);
    printf("%u\n", &ptr);
    getch();
}
