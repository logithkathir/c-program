#include<stdio.h>
#include<conio.h>
int main()
{
int n1,n2,num,sum,k,digit;
printf("Enter the first interval value /n");
scanf("%d",&n1);
printf("Enter the second interval value /n");
scanf("%d",&n2);
for(k=n1;k<=n2;k++)
{
sum=0;
num=k;
digit(num%10);
sum=sum+digit*digit*digit;
}
if(sum==k)
{
printf("%d\n",k);
}
return 0;
}

