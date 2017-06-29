#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,t1=0,t2=1,temp;
printf("Enter the number of terms \n");
scanf("%d",&n);
printf("Fibonacci series");
for(i=0;i<=n;i++)
{
printf("%d",t1);
temp=t1+t2;
t1=t2;
t2=temp;
}
return 0;
}
