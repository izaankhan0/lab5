/*
Question 6:
Create a program that counts the number of 1s in the binary representation of a number.
*/


#include <stdio.h>

int main() {
    int number, res;

    printf("Enter a number: ");
    scanf("%d", &number);

    res = __builtin_popcount(number);

    printf("The number of 1s in dis binary representation are: %d", res);

    return 0;
}

