#include<stdio.h>
#include<conio.h>
int main()
{
int j,k=1,num;
printf("Enter a number");
scanf("%d",&num);
for(j=1;j<=num;j++)
k=k*j;
printf("factorial of %d is %d",num,k);
return 0;
}
