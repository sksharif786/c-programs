#include<stdio.h>
#define MAX_SIZE 100

int main()
{
    int i,a[100],pos,n;
    printf("enter number: \n");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

    }
    printf("enter a location where you wish to delete\n");
    scanf("%d",&pos);
    for(i=pos-1; i<n-1; i++)
    {
        a[i]=a[i+1];

    }
printf("resultant array\n");
if(pos>n+1||pos<=0)
{
 printf("Invalid position! Please enter position between 1 to %d", n);
}
else{
    for(i=0; i<n-1; i++)
    {
        printf("%d\t ",a[i]);
    }
}
    return 0;
}
