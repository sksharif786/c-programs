#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
   int i,n,rem,sum=0;
   printf("enter the binary number");
   scanf("%d",&n);
   i=0;
   while(n>0)
   {
    rem=n%10;
    sum=sum+rem*pow(2,i);
    n=n/10;
    i++;
   }
   printf("%d",sum);

}