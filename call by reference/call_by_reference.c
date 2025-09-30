#include <stdio.h>

int swap (int *x, int *y)
{
    int temp = *x;  
    *x = *y;
    *y = temp;
    printf("Inside swap function: x = %d, y = %d\n", *x, *y);
    return 0;
}

int main()
{
    int a = 10, b = 20;
    printf("Before swap : a = %d, b = %d\n", a, b);
    swap(&a, &b); //call by reference
    printf("After swap : a = %d, b = %d\n", a, b);
    return 0;
}