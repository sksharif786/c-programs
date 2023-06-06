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
 /* Calculate sum of elements of each row of matrix */
for (int i=0;i<size_row;i++)
{
   int sum=0;
  for(int j=0;j<size_col;j++)
  {
     sum=sum+arr[i][j];
  }
 printf("Sum of elements of Row %d = %d\n",i,sum);
}
/* Find sum of elements of each columns of matrix */ 
for (int i=0;i<size_row;i++)
{
   int sum=0;
  for(int j=0;j<size_col;j++)
  {
     sum=sum+arr[j][i];//change i to j,j to i
  }
 printf("Sum of elements of Column %d = %d\n",i,sum);
}
}
