#include <stdio.h>

int swap(int x, int y) 
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("Inside swap function: x = %d, y = %d\n", x, y);
    return 0;
}

int main ()
{
    int a = 5, b = 10;
    printf("Before swap : a = %d, b = %d\n", a, b);
    swap(a, b); //call by value
    printf("After swap : a = %d, b = %d\n", a, b);
    return 0;
}
 //The values are changed but the values of a and b in main() remain unchanged because the swap function works on copies of the original values.
//In call by value, the actual parameters (a and b) are not modified by the function; only the copies (x and y) are modified within the function scope.