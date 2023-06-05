#include<stdio.h>
#include<conio.h>
void main()
{
  
  int size;
  printf("enter the size");
  scanf("%d",&size);
  int arr[size];
  printf("enter the elements");
  int i;
  for(int i=0;i<size;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(int i=size-1;i>=0;--i)
  {
    printf("%d ",arr[i]);
  }

  for(int i=0;i<size;i++)
  {
    if(arr[i]<0)
    {
      printf("\n%d",arr[i]);
    }
  }



}
