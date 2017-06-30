#include<stdio.h>
#inlcude<conio.h>
int main()
{
char str[100];
countDigits,countAlphabets,countAlphanumerals,countSpaces;
int counter;
countDigits=countAlphabets=countAlphanumerals=countSpaces;
printf("Enter a String:");
get(str);
for(counter=0;str[counter]!=NULL;counter++)
{
if(str[counter]>='0'&&str[counter]<='9')
countDigits++;
else if((str[counter]>='A'&&str[counter]<='Z')||(str[counter]>='a'&&str[counter]<='z'))
countAlphabets++;
else if(str[counter]=='')
countSpaces++;
else
countAlphanumerals++;
}
printf("\n Digits: %d,Alphabets: %d,Alphanumerals: %d,Spaces: %d",Digits,Alphabets,Alphanumerals,Spaces);
return 0;
}
