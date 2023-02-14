#include <stdio.h>

int main() 
{
    int A[10][10], i, j;
    
    printf("Enter First Matrix : ");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    
    double det = A[0][0] * (A[1][1]*A[2][2] - A[1][2]*A[2][1])
               - A[0][1] * (A[1][0]*A[2][2] - A[1][2]*A[2][0])
               + A[0][2] * (A[1][0]*A[2][1] - A[1][1]*A[2][0]);
    double Ainv[3][3];

    if (det != 0) 
    {
        Ainv[0][0] = (A[1][1]*A[2][2] - A[1][2]*A[2][1]) / det;
        Ainv[0][1] = (A[0][2]*A[2][1] - A[0][1]*A[2][2]) / det;
        Ainv[0][2] = (A[0][1]*A[1][2] - A[0][2]*A[1][1]) / det;
        Ainv[1][0] = (A[1][2]*A[2][0] - A[1][0]*A[2][2]) / det;
        Ainv[1][1] = (A[0][0]*A[2][2] - A[0][2]*A[2][0]) / det;
        Ainv[1][2] = (A[1][0]*A[0][2] - A[0][0]*A[1][2]) / det;
        Ainv[2][0] = (A[1][0]*A[2][1] - A[1][1]*A[2][0]) / det;
        Ainv[2][1] = (A[0][1]*A[2][0] - A[0][0]*A[2][1]) / det;
        Ainv[2][2] = (A[0][0]*A[1][1] - A[1][0]*A[0][1]) / det;

        printf("Inverse of the Matrix :\n");
        for (i = 0; i < 3; i++) 
        {
            for (j = 0; j < 3; j++) 
            {
                printf("%f ", Ainv[i][j]);
            }
            printf("\n");
        }
    }
    else 
    {
        printf("Matrix is Not Invertible.\n");
    }

    return 0;
}
