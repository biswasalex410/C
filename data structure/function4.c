#include<stdio.h>
int passarry(int arr[], int n)
{
  arr[2] = -5;
  arr[n-1] = -1;
}

int main()
{
  int i,n;
  printf("Enter Arry size: ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter atleast 5 elements: ");
  for(i=0;i<n;i++)
  {
   scanf("%d", &arr[i]);
  }
  printf("This is from main function: ");
  for(i=0;i<n;i++)
  {
   printf(" %d",arr[i]);
  }
  printf(" \n");

  passarry(arr,n);
  printf("After inserting value from function: ");
  for(i=0;i<n;i++)
  {
    printf(" %d",arr[i]);
  }
  return 0;
}
