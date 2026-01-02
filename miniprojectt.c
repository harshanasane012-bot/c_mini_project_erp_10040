#include <stdio.h>

int main() {
    int num, originalNum, digit;
    int sum = 0;
    int fact, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;   // store original number

    while (num > 0) {
        digit = num % 10;   // extract digit

        fact = 1;
        for (i = 1; i <= digit; i++) {
            fact = fact * i;   // factorial of digit
        }

        sum = sum + fact;  // add factorial to sum
        num = num / 10;    // remove last digit
    }

    if (sum == originalNum)
        printf("%d is a Strong Number", originalNum);
    else
        printf("%d is NOT a Strong Number", originalNum);

    return 0;
}
