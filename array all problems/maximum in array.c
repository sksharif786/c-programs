#include<stdio.h>
#include<conio.h>
void main()
{
  int max;
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
  max=arr[0];
  for(int i=0;i<size;i++)
  {
    if(max<arr[i])
    {
      max=arr[i];
    }
  }
 printf("\nthe maximum number in array:%d",max);


}
