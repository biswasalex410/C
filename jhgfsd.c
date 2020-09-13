#include<stdio.h>
int sum(int num)
{
 if (num!=0)
    return num + sum(num-1);
    else
        return num;
 }
int main(){
  int number, resul;
  scanf("%d", &number);
  printf("sum = %d", sum (number));
   return 0;
   }
