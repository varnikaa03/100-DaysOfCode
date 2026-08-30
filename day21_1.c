//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
int main()
{
int n,temp,first,last,power=1,result;
printf("Enter a number: ");
scanf("%d",&n);
temp=n;
last=n%10;
while(temp>=10)
{
temp=temp/10;
power=power*10;
}
first=temp;
result=n-first*power-last;
result=result+last*power+first;
printf("Number after swapping first and last digit is: %d",result);
return 0;
}
