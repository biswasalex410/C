#include<stdio.h>
main()
{
  char str[100],reverse_str[100];
  printf("Enter String: ");
  gets(str);
  int i, j, len = 0;
  for(i=0;str[i]!=0;i++)
  {
      len++;
  }
  for(j=0,i=len-1; i>=0;j++,i--)
  {
      reverse_str[j]=str[i];
  }
  reverse_str[j]='\0';
  printf("%s",reverse_str);
}
