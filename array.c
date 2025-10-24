/*
Write a program to calculate the average of array elements.


*/
#include <stdio.h>
int main()
{
    // variable declaration
    int num, i;
    float sum = 0.0, average;

    // prompt user to enter number of elements
    printf("Enter number of elements:\t");
    scanf("%d", &num);
    // declare an array to hold the elements
    float array[num];
    printf("Array number of elements is %d\n", num);

    // prompt user to enter array elements
    for (i = 0; i < num; i++)
    {
        printf("Enter element %d: \t ", i + 1); // prompt user to enter each element
        scanf("%f", &array[i]);
        sum += array[i]; // calculate the sum of array elements
    }
    average = sum / num; // calculate the average
    // display the average
    printf("Average of array elements is : %.2f\n", average);

    return 0;
}