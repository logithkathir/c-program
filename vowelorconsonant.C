#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
char z;
printf("Enter the alphabet /n");
scanf("%c",&z);
isLowercaseVowel=(z=='a'||z=='e'||z=='i'||z=='o'||z=='u');
isUppercaseVowel=(z=='A'||z=='E'||z=='I'||z=='O'||z=='U');
if(isLowercaseVowel||isUppercaseVowel)
printf("the given alphabet is a lower case vowel \n");
else
printf("the given alphabet is a upper case vowel \n");
return 0;
}
