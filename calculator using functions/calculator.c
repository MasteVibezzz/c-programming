#include <stdio.h>

float a,b;
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
    float addition = add();
    float subtraction = subtract();
    float multiplication = multiply();
    float division = divide();
    printf("add, subtract, multiply, or divide ?");
    printf("choose 1, 2, 3 or 4");
    scanf("%d", &n);
    
    if(n==1)
    {
        printf("%f" ,addition);
    }
    
    else if (n==2)
    {
        printf("%f" ,subtraction);
    }
    
    else if (n==3)
    {
        printf("%f" ,multiplication);
    }

    else if (n==4)
    {
        printf("%f" ,division);
    }

    else
    {
        printf("Invalid input");
    }
    
}