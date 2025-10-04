#include <stdio.h>

float a,b;
int input(){
    printf("Enter the two numbers: ");
    scanf("%f", &a);
    scanf("%f", &b);
    return 0;
}

float add(){
    return a+b;
}

float subtract(){
    return a-b;
}

float multiply(){
    return a*b;
}

float divide(){
    return a/b;
}

int main()
{
    int n;
    input();
    printf("Choose operation:\n1=add\n2=subtract\n3=multiply\n4=divide\nEnter your choice (1-4): ");
    scanf("%d", &n);
    if (n==1)
    {
            printf("%f", add());
    }
    else if (n==2)
    {
        printf("%f", subtract());
    }
    else if (n==3)
    {
        printf("%f", multiply());
    }
    else if (n==4)
    {
        printf("%f", divide());
    }
    else
    {
        printf("Invalid input");
    }
    
    return 0;
}