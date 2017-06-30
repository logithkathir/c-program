#include<stdio.h>
#include<conio.h>
int char ch;
int i;
clrscr();
void main()
{
printf("print 1 to 5 again and again");
while(1)
{
for(i=1;i<=5;i++)
printf("\n%d",i);
ch=getch();
if(ch=='Q')
exit 0;
}
getch ();
}
