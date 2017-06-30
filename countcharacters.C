#include<stdio.h>
#include<conio.h>
void main()
{
int count ch=0;
int count wd=1;
printf("Enter your sentence in lower case /n");
char ch='a';
while(ch!='\r')
{
ch=getche();
if(ch=='')
count wd++;
else
count ch++;
}
printf("\n words=",count wd);
printf("\n characters=",count ch-1);
getch();
}
