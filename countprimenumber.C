#include<stdio.h>
#include<conio.h>
int main()
{
int n,m,count,num;
printf("Enter the minimum range \n");
scanf("%d",&n);
printf("Enter the maximum range \n");
scanf("%d",&m);
for(num=n;num<=m;num++)
count=0;
{
for(i=2;i<=num/2;i++)
{
if(num%i==0)
{
count++;
break;
}
}
if(count==0 && num!=1)
printf("%d",num);
}
return 0;
}

