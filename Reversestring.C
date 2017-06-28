#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char str[10];
char *rev;
printf("Enter the string \n");
scanf("%s",&str);
str=strrev(str);
printf("The reversed string is: %s",rev);
return 0;
}
