#include<stdio.h>
#define N 100
int main()
{
  int n1;
  int arr[N];
  printf("enter the size:");
  scanf("%d",&n1);
  for (int i=0;i<n1;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(int i=0;i<n1;i++)
  {
    if(arr[i]%2==0)
    {
      printf("\nthe even numbers");
      printf("%d",arr[i]);
    }
    else
    {
      printf("\nthe odd numbers");
      printf("%d",arr[i]);
    }

  }
  
}
