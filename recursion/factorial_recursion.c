#include<stdio.h>

int factorial(int n){
    if(n==0)
    return 1;
    else
    return factorial(n-1) * n;
}

int main(){
    int size;
    printf("Enter the number : ");
    scanf("%d",&size);
    
    int f = factorial(size);
    printf("factorial of the number : %d",f);
    return 0;
}