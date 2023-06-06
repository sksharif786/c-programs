
#include<stdio.h>
#include<conio.h>
void main()
{
  
int size_row,size_col;
printf("enter the row and col size:");
scanf("%d %d",&size_row,&size_col);
int arr[size_row][size_col];
for (int i=0;i<size_row;i++)
{
  for(int j=0;j<size_col;j++)
  {
    scanf("%d",&arr[i][j]);
  }
}
for (int i=0;i<size_row;i++)
{
  for(int j=0;j<size_col;j++)
  {
    printf("%d\t",arr[i][j]);
  }
  printf("\n");
}
printf("the diagonals");
for (int i=0;i<size_row;i++)
{
  for(int j=0;j<size_col;j++)
  {
    if(arr[i]==arr[j])
    {
    printf("%d\t",arr[i][j]);
    }
  }
  printf("\n");
}


}
