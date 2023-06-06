/**
 * C program to perform scalar matrix multiplication
 */
 
#include <stdio.h>

#define SIZE 3 // Maximum size of the array

int main()
{
    int A[SIZE][SIZE]; 
    int num, row, col;

    /* Input elements in matrix from user */
    printf("Enter elements in matrix of size %dx%d: \n", SIZE, SIZE);
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    /* Input multiplier from user */
    printf("Enter any number to multiply with matrix A: ");
    scanf("%d", &num);

    /* Perform scalar multiplication of matrix */
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            /* (cAij) = c . Aij */
            A[row][col] = num * A[row][col];
        }
    }

    /* Print result of scalar multiplication of matrix */
    printf("\nResultant matrix c.A = \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            printf("%d ", A[row][col]);
        }
        printf("\n");
    }

    return 0;
}
