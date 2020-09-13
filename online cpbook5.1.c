#include<stdio.h>
main()
{
    int x,y,x_plus_y,x_minus_y;
    printf("Enter x+y value: ");
    scanf("%d",&x_plus_y);
    printf("Enter x-y value: ");
    scanf("%d",&x_minus_y);
    x = (x_plus_y+x_minus_y)/2;
    y = (x_plus_y-x_minus_y)/2;
    printf("x = %d\ny = %d\n", x, y);
    return 0;

}
