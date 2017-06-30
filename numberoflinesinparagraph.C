#include<stdio.h>
#inlcude<conio.h>
void main()
{
char line[],ctr;
int i,c,lines=0;
printf("when completed,press enter \n")
while(end==0)
{
c=0;
while((ctr=getchar()!='\n')
line[c++]=ctr;
line[c]='\0';
if(line[0]=='\0')
lines=lines+1;
}
printf("\n");
printf("number of lines=%d",lines);
getch();
}
