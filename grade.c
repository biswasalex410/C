#include<stdio.h>
main()
{
    int marks;
    printf("Enter the marks:");
    scanf("%d",&marks);
    if((marks>=80)&&(marks<=100))
        printf("A+",marks);

    else if((marks>=75)&&(marks<=79))

        printf("A",marks);

    else if((marks>=70)&&(marks<=74))

        printf("A-",marks);

    else if ((marks>=65)&&(marks<=69))

        printf("B+",marks);

    else if((marks>=60)&&(marks<=64))

        printf("B",marks);
    else if((marks>=55)&&(marks<=59))
        printf("C+",marks);
    else if((marks>=50)&&(marks<=54))
        printf("C",marks);
    else if((marks>=45)&&(marks<=49))
        printf("D+",marks);
    else if((marks>=40)&&(marks<=44))
        printf("D",marks);
    else
        printf(" F",marks);
    return 0;
}
