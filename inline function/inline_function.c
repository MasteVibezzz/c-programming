#include <stdio.h>

inline int sqaure(int x) {
    return x * x;
}

int main()
{
    printf("Sqaure of 5 = %d\n", sqaure(5));
    return 0;
}