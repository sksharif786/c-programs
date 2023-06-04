#include<stdio.h>
#include<conio.h>
int main()
{
    int number=1234,remainder,reverse=0;
    while(number!=0)
    {
        remainder=number%10;
        reverse=reverse*10+remainder;
        number=number/10;
    }
    printf("the reverse number is %d",reverse);
}