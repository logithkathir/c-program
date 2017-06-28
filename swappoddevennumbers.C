#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
int str,i;
printf("Enter the input string \n");
scanf("%s",&str);
printf("Enter the original string:  %s \n");
for(i=1;i<strlen(str);i=i+2)
{
temp=str[i];
str[i]=str[i+1];
str[i+1]=temp;
}
printf("The string after swapping : %s",str);
getch();
}
