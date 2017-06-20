#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int no1,no2,no3;
printf("Enter the three numbers \n");
scanf("%d,%d,%d",&no1,&no2,&no3);
if(no1>no2&&no1>no3)
printf("the largest among the three numbers is, no1");
elseif(no2>no1&&no2>no3)
printf("the largest among the three numbers is,no2");
elseif(no3>no1&&no3>no2)
printf("the largest among the three numbers is,no3");
return 0;
}
