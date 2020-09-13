#include<stdio.h>
#include<stdlib.h>
struct student
{
    char name[1000];
    char id[100];
    char sec[10];
    double cgpa;
    char department[100];
};
int main()
{
    int n,i;
    printf("Enter Number of Students: ");
    scanf("%d",&n);
    struct student *ptr;
    ptr = (struct student*)malloc(n*sizeof(struct student));
    for(i=0; i<n; i++)
    {
        printf("Enter Student Name: ");
        scanf("%s",&(ptr+i)->name);
        getchar();
        printf("Enter Student ID: ");
        scanf("%s",&(ptr+i)->id);
        getchar();
        printf("Enter Student Section: ");
        scanf("%s",&(ptr+i)->sec);
        getchar();
        printf("Enter Student CGPA: ");
        scanf("%lf",&(ptr+i)->cgpa);
        getchar();
        printf("Enter Student Department: ");
        scanf("%s",&(ptr+i)->department);
        getchar();
    }
    printf("Student Details: \n");
    for(i=0; i<n; i++)
    {
        printf("Student Name: ");
        printf("%s\n",(ptr+i)->name);
        printf("Students ID: ");
        printf("%s\n",(ptr+i)->id);
        printf("Student Section: ");
        printf("%s\n",(ptr+i)->sec);
        printf("Student CGPA: ");
        printf("%0.2lf\n",(ptr+i)->cgpa);
        printf("Student Department: ");
        printf("%s\n",(ptr+i)->department);
    }
    return 0;
}
