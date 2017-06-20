#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
long long no;
int count=0;
printf("Enter any number /n");
scanf("%lld",&no);
while(no!=0)
{
count++;
no/=10;
}
printf("Total digits:%d",count);
return 0;
}
