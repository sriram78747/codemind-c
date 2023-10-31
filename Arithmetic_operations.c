#include<stdio.h>
int main()
{
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    int Sum = num1 + num2;
    printf("Sum:%d
", Sum);

    int Difference = num1 - num2;
    printf("Difference:%d
", Difference);

    int Product = num1 * num2;
    printf("Product:%d
", Product);

    int Quotient = num1 / num2;
    printf("Quotient:%d
",Quotient);
    
    int Remainder = num1 % num2;
    printf("Remainder:%d
",Remainder);
}