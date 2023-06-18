
#include<stdio.h>
#include<conio.h>
void main()
{
  int size;
  printf("enter the size");
  scanf("%d",&size);
  int arr[size];
  printf("enter the elements");
  int i;
  for(int i=0;i<size;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(int i=0;i<size;i++)
  {
    printf("%d  ",arr[i]);
  }

}



(or)

/**
 * C program to read and print elements in an array
 */

#include <stdio.h>
#define MAX_SIZE 1000 // Maximum array size

int main()
{
    int arr[MAX_SIZE]; // Declare an array of MAX_SIZE
    int i, N;

    /* Input array size */
    printf("Enter size of array: ");
    scanf("%d", &N);

    /* Input elements in array */
    printf("Enter %d elements in the array : ", N);
    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }


    /*
     * Print all elements of array
     */
    printf("\nElements in array are: ");
    for(i=0; i<N; i++)
    {
        printf("%d, ", arr[i]);
    }

    return 0;
}
