#include <stdio.h>

int main() 
{
    float a, b, c, d; 
    float det; 
    float inv_a, inv_b, inv_c, inv_d; 

    printf("Enter the Elements of the 2x2 Matrix : \n");
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);
    printf("d = ");
    scanf("%f", &d);

    det = a*d - b*c;

    if (det == 0) 
    {
        printf("The Matrix is Not Invertible.\n");
        return 1; 
    }

    inv_a = d / det;
    inv_b = -b / det;
    inv_c = -c / det;
    inv_d = a / det;

    printf("The Inverse of the Matrix is : \n");
    printf("[%.2f, %.2f]\n", inv_a, inv_b);
    printf("[%.2f, %.2f]\n", inv_c, inv_d);

    return 0;
}
