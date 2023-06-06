/*
A[2][2]    T[2][2]
1 2         1  3
3 4         2  4
A[0][0]=1    T[0][0]=1  =>A[0][0]
A[0][1]=2    T[0][1]=3  =>A[1][0]
A[1][0]=3    T[1][0]=2  =>A[0][1]
A[1][1]=4    T[1][1]=4  =>A[1][1]

*/
#include<stdio.h>
#include<conio.h>
void main()
{
  int A[10][10],T[10][10];
  int r,c,i,d;
  printf("enter the rows and columns");
  scanf("%d %d",&r,&c);
  for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {
    scanf("%d",&A[i][j]);
    }
  }
  for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {
    T[j][i]=A[i][j];
    }
  }
  //transpose of matrix
  for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {
   printf("%d\t",T[i][j]);
    }
    printf("\n");
  }
}
