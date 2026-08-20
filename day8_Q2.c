/*
Q16: Write a program to input three numbers and find the largest among them using if–else.

Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0
*/

#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Input three numbers from user
printf("Enter num1 : ");
 scanf("%d",&num1);
printf("Enter num2 : ");
 scanf("%d", &num2);
printf("Enter num3 : ");   
 scanf("%d", &num3);

    // Compare numbers using if-else to find the largest
    if (num1 >= num2 && num1 >= num3) {
        printf("Largest is %d\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("Largest is %d\n", num2);
    } else {
        printf("Largest is %d\n", num3);
    }

    return 0;
}
