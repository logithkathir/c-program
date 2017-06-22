#include<stdio.h>
#inlcude<conio.h>
int main()
{
int n,rev=0,temp;
printf("Enter the number to check whether  it is a palindrome or not");
scanf("%d",&n);
temp=n;
while(temp!=0)
{
rev=temp%10;
rev=rev+temp%10;
temp=temp/10;
}
if(rev==n)
printf("the given number is a palindrome number \n");
else
printf("the given number is not a palindrome number \n");
return 0;
}
