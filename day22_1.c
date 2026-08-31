//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>
int main()
{
int n,temp,digit,i,fact,sum=0;
printf("Enter a number: ");
scanf("%d",&n);
temp=n;
while(temp>0)
{
digit=temp%10;
fact=1;
for(i=1;i<=digit;i++)
{
fact=fact*i;
}
sum=sum+fact;
temp=temp/10;
}
if(sum==n)
{
printf("Strong number");
}
else
{
printf("Not strong number");
}
return 0;
}
