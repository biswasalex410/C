#include<stdio.h>
int main()
{
    int x = 5, y = 10, z = 15, *ptr;
    ptr = &x;
    printf("X = %d\n", *ptr);
    printf("X address %d\n", &*ptr);
    ptr = &y;
    printf("Y = %d\n", *ptr);
    printf("Y address %d\n", ptr);
    ptr = &z;
    printf("Z = %d\n", *ptr);
    printf("Z adress %d\n", ptr);
    getch();
}

