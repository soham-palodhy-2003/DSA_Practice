#include <stdio.h>

struct Rectangle
{
    int length;
    int breadth;
};
void initialize(struct Rectangle *r,int l, int b){
    r->length = l;
    r->breadth = b;
}
int area(struct Rectangle r){
    return r.breadth * r.length;
}
void changelength( struct Rectangle *r,int l){
    r->length = l;
}

int main(){
    struct Rectangle r;

    initialize(&r,10,5);
    area(r);
    printf("area %d\n",area());
    changelength(&r,20);
    printf("area %d\n",area());
}