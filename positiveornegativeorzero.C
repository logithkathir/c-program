#include<stdio.h>
#include<conio.h>
int main()
{
int number;
printf("Enter the number to find it is positive or negative or zero");
scanf("%d",&number)
if(number<0)
printf("the given number is a negative number /n");
elseif(number>0)
printf("the given number is a positive number /n");
else
printf("you have entered zero");
return 0;
}
