//Q5: Write a program to convert temperature from Celsius to Fahrenheit.
//formula = ( C * 9/5)+32
/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include<stdio.h>
int main(){
float celcius,fahrenheit;
printf("Enter temperature in Celcius :");
scanf("%f",&celcius);
fahrenheit = (celcius * 9.0/5.0)+32;
printf("Temperature in Fahrenheit :%f\n",fahrenheit);
return 0;
}


