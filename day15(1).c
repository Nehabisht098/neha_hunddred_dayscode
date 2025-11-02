//Write a program to calculate the factorial of a number.


#include<stdio.h>
int main(){
    int n;
    int fact=1;
    int i=1;
    printf("enter a no:");
    scanf("%d",&n);
    if(n<0){
        printf("error:)");
        return 1;
    }
    else if(n>15){
        printf("warning:)");
    }
         while(i<=n){
            fact*=i;
            i++;
         }
            
    
    printf("factorial of %d=%d\n",n,fact);

    return 0;

}