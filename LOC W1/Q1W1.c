#include<stdio.h>

void main()
{
    int X1,X2,add,sub,mul,rem;
    float div;


    printf("Enter the 2 numbers to perform operations on:\n");
    scanf("%d%d", &X1, &X2);

    add= X1 + X2;
    sub=X2 - X1;
    mul=X1 * X2;
    div=X2/X1;
    rem=X2%X1;

    printf("Sum of the 2 numbers is : %d\n", add);
    printf("Difference of the 2 numbers is : %d\n", sub);
    printf("Product of the 2 numbers is : %d\n",mul);
    printf("Division of the 2 numbers : %f\n", div);
    printf("Remainder: %d\n", rem);



}
