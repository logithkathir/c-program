#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
char rom[30];
int a[30],l,i,k;
clrscr();
printf("Enter the roman number \n");
scanf("%s",&rom);
l=strlen(rom);
for(i=0;l<ni++)
{
switch(rom[i])
{
case 'I': a[i]=1;
break;
case 'II':a[i]=2;
break;
case 'IV':a[i]=4;
break;
case 'X': a[i]=10;
break;
case 'L': a[i]=50;
break;
case 'C': a[i]=100;
break;
case 'L': a[i]=100;
break;
default: printf("Invalid choice");
break;
}
}
k=a[l-1]
{
for(i=l-1;i>0;i--)
{
if(a[i]>a[i-1])
{
k=k-a[i-1];
}
if(a[i]<=a[i-1])
{
k=k+a[i-1];
}
}
printf("The integer is %d",k);
retrun 0;
}
