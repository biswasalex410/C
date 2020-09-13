#include<stdio.h>
int multiply(int a,int b,int c)
{
  int res=a*b*c;
  return res;
}

int main()
{
  int a, b, c;
  printf("Enter three number: ");
  scanf("%d %d %d", &a,&b,&c);
  int result = multiply(a,b,c);
  printf("Result =  %d\n", result);
  return 0;
}
