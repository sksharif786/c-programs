#include<stdio.h>
#include<conio.h>
int main()
{
   int binary[100],n,i,j;
    printf("enter the number");
    scanf("%d",&n);
    i=0;
    while(n>0)
    {
        binary[i]=n%2;
        n=n/2;
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d",binary[j]);
    }
}