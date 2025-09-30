#include <stdio.h>
int main()
{
    int arr[]={23,45,12,67,34,89,2,5,34,99};
    int largest=arr[0];
    int smallest=arr[0];
    int second_smallest=arr[0];
    int second_largest=arr[0];

    for (int i=1; i<10; i++) // Loop starts from 1 since we have already assigned arr[0] to largest and smallest
                            //Loop goes till 8 cause idk how to calculate length of a array
    {
        if(arr[i]>largest)
        {
            second_largest=largest;
            largest=arr[i];
        }
        if(arr[i]<smallest)
        {
            second_smallest=smallest;
            smallest=arr[i];
        }
    }

    printf("Greatest number is %d\n", largest);
    printf("Least number is %d\n", smallest);   
    printf("Second Greatest number is %d\n", second_largest);
    printf("Second Least number is %d\n", second_smallest);
    return 0;
}