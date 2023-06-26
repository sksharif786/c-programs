// use j++ to store last element 
//c programe to remove the duplicates elements
#include<stdio.h>

void remove_duplicate(int arr[],int n)   //n=number of elements in an array
{
    int j=0;

    //traversing element in an array
    for(int i=0; i<n-1;i++)
    {
        if(arr[i] != arr[i+1])
        {
            arr[j]=arr[i];
            j++;
        }
    }

    //storing lat element in array[j] at last
    arr[j++]=arr[n-1];


    // printing elements from the array;
    for(int i=0;i<j;i++)
    {
        printf("%d ",arr[i]);
    }
}

int main()
{
    int arr[]={1,3,4,5,5,5,6,7,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    remove_duplicate(arr,n);
}
