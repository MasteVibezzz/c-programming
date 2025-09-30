#include <stdio.h>

double a,b;
int input(){
    printf("Enter the two numbers: ");
    scanf("%d", &a);
    scanf("%d", &b);
    return 0;
}

int add(){
    return a+b;
}

int subtract(){
    return a-b;
}

int multiply(){
    return a*b;
}

int divide(){
    return a*(1/b);
}

int main(){
    int n;
    int inp=input();
    double addition = add();
    double subtraction = subtract();
    double multiplication = multiply();
    double division = divide();
    printf("add, subtract, multiply, or divide ?");
    printf("choose 1, 2, 3 or 4");
    scanf("%d", &n);
    
    if(n==1)
    {
        printf("%d" ,addition);
    }
    
    else if (n==2)
    {
        printf("%d" ,subtraction);
    }
    
    else if (n==3)
    {
        printf("%d" ,multiplication);
    }

    else if (n==4)
    {
        printf("%d" ,division);
    }

    else
    {
        printf("Invalid input");
    }
    
}