#include<stdio.h>
#include<conio.h>
#include<string.h>
void(int *,int *);
void main()
{
int num1,num2;
printf("Enter the two numbers \n");
scanf("%d%d",&num1,&num2);
printf("The number before swapping are number1=%d number2=%d",num1,num2);
swap(&num1,&num2);
printf("the number after swapping are number1=%d number2=%d",num1,num2);
}
void swap(int *x,int *y)
*x=(*x^*y);
*y=(*x^*y);
*x=(*x^*y);
}
