#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    lastDigit = num % 10;

    firstDigit = num;
    while (firstDigit >= 10)
     {
        firstDigit /= 10;
    }

    sum = firstDigit + lastDigit;

    printf("Sum of first and last digits: %d\n", sum);

    return 0;
}