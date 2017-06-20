#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
char k;
printf("Enter the character\n");
scanf("%c",k);
if(k>='a'&&k<='z')||(k>='A'&&k<='Z')
printf("The given character is a alphabet");
else
printf("The given character is not a alphabet");
return 0;
}
