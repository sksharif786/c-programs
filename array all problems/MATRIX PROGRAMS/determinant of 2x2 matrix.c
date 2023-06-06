/**
 * C program to find determinant of 2x2 matrix
 */

#include <stdio.h>
#define SIZE 2 // Matrix size

int main()
{
    int A[SIZE][SIZE];
    int row, col;
    long det;

    /* Input elements in matrix A from user */
    printf("Enter elements in matrix of size 2x2: \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    /*
     * det(A) = ad - bc
     * a = A[0][0], b = A[0][1], c = A[1][0], d = A[1][1]
     */
    det = (A[0][0] * A[1][1]) - (A[0][1] * A[1][0]);

    printf("Determinant of matrix A = %ld", det);

    return 0;
}
