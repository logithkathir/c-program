#include<stdio.h>
#include<conio.h>
int main()
{
char str[100];
int countDigits;
int counter;
countDigits=0;
printf("Enter the string \n");
get(str);
for(counter=0;str[counter]!=NULL;counter++)
{
if(str[counter]>='0' && str[counter]<='9')
countDigits++;
printf("\n countDigits:%d",countDigits);
return 0;
}
