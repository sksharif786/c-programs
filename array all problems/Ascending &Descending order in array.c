#include<stdio.h>
#include<conio.h>
void main()
{
  
  int size,j,temp;
  printf("enter the size");
  scanf("%d",&size);
  int arr[size];
  printf("enter the elements");
  int i;
  for(int i=0;i<size;i++)
  {
    scanf("%d",&arr[i]);
  }
  
//ascending order code
printf("ascending order\n");
  for(int i=0;i<size;i++)
  {
   for(j=i+1;j<size;j++)
   {
    if(arr[i]>arr[j])
    {
      temp=arr[i];
      arr[i]=arr[j];
      arr[j]=temp;
    }
   }
  }
  for(int i=0;i<size;i++)
  {
    printf("%d ",arr[i]);
  }
  //descending order code
  printf("descending  order");
  for(int i=0;i<size;i++)
  {
   for(j=i+1;j<size;j++)
   {
    if(arr[i]<arr[j])
    {
      temp=arr[i];
      arr[i]=arr[j];
      arr[j]=temp;
    }
   }
  }
  for(int i=0;i<size;i++)
  {
    printf("%d ",arr[i]);
  }



}
