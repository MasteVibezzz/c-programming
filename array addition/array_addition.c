#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5}, sum = 0, i;
    for (i=0; i<5; i++) 
    {
        sum += arr[i];
    }
    printf("Sum of array elements: %d\n", sum);
    return 0;
}