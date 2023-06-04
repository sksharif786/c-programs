#include<stdio.h>
#include<conio.h>
int main()
{
    int number=5225,remainder,temp,sum=0,c;
    temp=number;
    while(number!=0)
    {
        remainder=number%10;
       sum=sum*10+remainder;
        number=number/10;   
    }
    if(temp==sum)
    {
        printf("it is a palindrome");
    }
    else{
        printf("it is not a palindrome");
    }
}