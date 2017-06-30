#include<stdio.h>
#include<conio.h>
int main()
{
char str[50];
int countSpecialcharacters;
int counter;
countSpecialcharacters=0;
printf("Enter the string");
get(str);
for(counter=0;str[counter]!=NULL;counter++)
{
countSpecialcharacters++;
}
printf("\n Special characters%d",countSpecialcharacters");
return 0;
}
