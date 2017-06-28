#include<stdio.h>
#include<conio.h>
int main()
{
int n,reverse=0,rightdigit;
printf("Enter the number");
scanf("%d",&n);
while(n!=0)
rightdigit=n%10;
reverse=(reverse*10)+rightdigit;
n=n/10;
}
printf("The reversed number is %d\n",reverse);
return 0;
)
