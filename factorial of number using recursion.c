//factorial of number using recursion
#include<stdio.h>
int facto(int n){
    if(n==1 || n==0)
        return 1;
    else
        return (n*facto(n-1));
}
int main(){
    int num,fact;
    printf("Enter a number");
    scanf("%d",&num);
    fact=facto(num);
    printf("Factorial is %d",fact);
}