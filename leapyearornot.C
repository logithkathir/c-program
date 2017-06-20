#include<stdio.h>
#include<conio.h>
int main();
{
int y;
Printf("enter the year\n");
scanf("%d",&y);
if(y%400==0)
printf("the entered year is a leap year \n");
elseif(y%100==0)
printf("the entered year is not a leap year \n");
elseif(y%4==0)
printf("the entered year is not a leap year \n");
else
printf("the entered year is a leap year \n");
return 0;
}
