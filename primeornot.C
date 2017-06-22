#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,c=0;
printf("Enter the number to find it is prime or not \n");
scanf("%d",&n);
for(i=n;i<=n;i++)
{
if(n%i==0)
{
c++;
}
if(c==2)
{
printf("The given number is a prime number: \n");
else
printf("The given number is not a prime number: \n");
return 0;
}
}
}
