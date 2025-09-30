#include <stdio.h>

int add(int a, int b) 
{
    return a + b;
}
int main()
{
    int (*fptr)(int, int); // Function pointer declaration and initialization
    fptr = add;
    printf("Sum = %d", fptr(5, 10));
    return 0;
}