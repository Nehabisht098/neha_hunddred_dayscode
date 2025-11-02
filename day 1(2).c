//Write a program to input two numbers and display their sum, difference, product, and quotient.


#include<stdio.h>
void main()
{
    int num1,num2;
    int sum, diff,product;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    float quotient;

    sum=num1+num2;
    diff=num1-num2;
    product=num1*num2;


    if (num2 != 0) {
        quotient = (float)num1 / num2; 
    } else {
        printf("\nError: Division by zero is not allowed.\n");
        return 1;

         printf("\nResults:\n");
         printf("Sum: %d\n", sum);
         printf("Difference: %d\n", diff);
         printf("Product: %d\n", product);
         printf("Quotient: %.2f\n", quotient);

}