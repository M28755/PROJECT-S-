/*
Write a function to find the greatest common divisor (GCD) of two numbers.


*/
#include <stdio.h>
int main()
{ // varaible declaration
    int num1;
    int num2;
    int GCD;
    // prompt usre to enter two  numbers
    printf("Enter First Numbers:\n"); // user to enter first number
    scanf("%d", &num1);
    printf("Enter Second Number"); // user to enter second number
    scanf("%d", &num2);

    // loop to find GCD
    int i;
    for (i = 1; i <= num1 && i <= num2; i++) // loop from 1 to the smallest number of the two numbers
    {
        if (num1 % i == 0 && num2 % i == 0) // check if i is a common divisor
        {
            GCD = i; // assign  i to GCD
        }
        else if (num1 % i != 0 && num2 % i != 0) // check if i is not a common divisor
        {
            continue;
        }

        //
    }
    printf("GCD of %d and %d is %d\n", num1, num2, GCD); // display the GCD
    return 0;
}