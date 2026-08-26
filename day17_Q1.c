//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>

int main() {
    int num, originalNum, remainder, result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result = result + (remainder * remainder * remainder);
        originalNum = originalNum / 10;
    }

    if (result == num) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }

    return 0;
}
