#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,n,i,large=0;
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    if(ptr == NULL){
        printf("Memory Not Allocated\n");
        exit(0);
    }
    else printf("Enter Array Elements: ");
    for(i=0;i<n;i++)
    scanf("%d",(ptr+i));
    for(i=0;i<n;i++)
    {
        if(large <*(ptr+i));
        large=*(ptr+i);
    }
    printf("Largest Elements: %d\n",large);
    int m;
    printf("Enter 1 to free the Allocated Memory: ");
    scanf("%d",&m);
    if(m==1)
        {
            free(ptr);
    printf("Malloc Memory Successfully freed\n");
        }
        else{
            printf("Wrong Input");
        }
        return 0;
}
