//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>
int main()
{
int a,b,lcm;
printf("Enter two numbers: ");
scanf("%d %d",&a,&b);
lcm=(a>b)?a:b;
while(1)
{
if(lcm%a==0 && lcm%b==0)
{
break;
}
lcm++;
}
printf("LCM of %d and %d is: %d",a,b,lcm);
return 0;
}
