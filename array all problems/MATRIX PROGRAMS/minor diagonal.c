/**
 * C program to find sum of opposite diagonal elements of a matrix
 */

#include <stdio.h>

#define SIZE 3 // Matrix size

int main()
{
    int A[SIZE][SIZE];
    int row, col, sum = 0;

    /* Input elements in matrix from user */
    printf("Enter elements in matrix of size %dx%d: \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    /* Find sum of minor diagonal elements */
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            /*
             * If it is minor diagonal of matrix
             * Minor diagonal: i+j == N + 1
             * Since array elements starts from 0 hence i+j == (N + 1)-2
             */
            if(row+col == ((SIZE+1)-2))
            {
                sum += A[row][col];
            }
        }
    }

    printf("\nSum of minor diagonal elements = %d", sum);

    return 0;
}
