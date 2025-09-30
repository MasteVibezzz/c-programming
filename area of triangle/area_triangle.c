#include <stdio.h>

int main()
{
    int a = 5;
    int b = 3;
    float area1 = (float)(a * b) * 1/2; 
    float area2 = (float)(1/2) * (a * b);
    float area3 = (a * b) * 1/2; 
    float area4 = (a * b) / 2.0; 
    printf("%f\n", area1);
    printf("%f\n", area2);
    printf("%f\n", area3);
    printf("%f\n", area4);
}