#include<stdio.h>
double Taylor_Series(int x, int n){
    static double p =1, f = 1;
    double r;
    if(n==0)
    return 1;
    r = Taylor_Series(x,n-1);
    p*=x;
    f*=n;
    return r+p/f;
}
int main(){
    printf("%1f\n", Taylor_Series(1,10));
    return 0;
}