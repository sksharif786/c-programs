#include<stdio.h>
#include<conio.h>
int main()
{
    int number=143,remainder,temp,sum=0,c;
    temp=number;
    while(number!=0)
    {
        remainder=number%10;
        c=remainder*remainder*remainder;
        sum=sum+c;
        number=number/10;   
    }
    if(temp==sum)
    {
        printf("it is a arm strong number");
    }
    else{
        printf("it is not a arm strong number");
    }
}
