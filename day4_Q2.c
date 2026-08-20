//Q8: Write a program to find and display the sum of the first n natural numbers.

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/
#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;
    printf("Enter a positive integer (n): ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1; 
    }
    if (n <= 0) {
        printf("Error: Please enter a positive integer greater than 0.\n");
        return 1;
    }
    for (i = 1; i <= n; ++i) {
        sum += i;
    }
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}
