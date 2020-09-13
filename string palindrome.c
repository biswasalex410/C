#include<stdio.h>
main()
{
  char str[100],str1[100];
  printf("Enter String: ");
  gets(str);
  int i, j, len = 0;
  for(i=0;str[i]!=0;i++)
  {
      len++;
  }
  for(j=0,i=len-1; i>=0;j++,i--)
  {
      str1[j]=str[i];
  }
  str1[j]='\0';
  int d = strcmp(str,str1);
  if(d==0)
  {
      printf("this is a palindrome");
  }
  else printf("this is not a palindrome");
}
