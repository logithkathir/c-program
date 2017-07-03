#include<stdio.h>
#include<conio.h>
int main()
{
int n1,n2,n3;
printf("Enter the values of three numbers\n");
scanf("%d%d%d",&n1&n2&n3);
if(n1>=n2&&n1>=n3)
printf("the largest among the three numbers is:", n1);
if(n2>=n1&&n2>=n3)
printf("The largest among the three numbers is:", n2);
if(n3>=n1&&n3>=n2)
printf("The largest among the three numbers is:", n3);
return 0;
}
