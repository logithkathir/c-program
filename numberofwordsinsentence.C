#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[200];
int count=0,i;
printf("Enter the string \n");
scanf("%s",&s)
for(i=0;s[i]!='\0';i++)
{
if(s[i]== ' ')
count++;
}
printf("print the number of words present in the given sentence \n",count+1);
return 0;
}
