//Write a program to input two numbers and display their s

#include<stdio.h>
void main()
{
    int num1, num2, sum;
    printf("enter two integers:");
    scanf("%d %d", &num1,&num2);
    sum = num1+num2;
    printf("sum of %d and %d is: %d\n", num1, num2, sum);
}

