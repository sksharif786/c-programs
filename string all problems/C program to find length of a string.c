#include<stdio.h>
int  main()
{
  //char str[]  (or)  char *str both are same
  char *str;
  printf("enter the string:");
  //  %[^\n]s  is used to get full string
  scanf("%[^\n]s",str);
  printf("%s",str);
  int c=0;
  for(int i=0;str[i]!='\0';i++)
  {
    c+=1;
  }
  printf("\n%d",c);
}
