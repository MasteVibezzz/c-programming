#include <stdio.h>
int add(){
    int a=5;
    int b=10;
    int c=a+b;
    return c;
}
int main (){
    int d = add();
    printf("%d", d);
}