#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void printrepeatingelement(int arr[],int size)
{
int i,j;
printf("The repeating elements in an array are: \n");
for(i=0;i<size;i++)
for(j=i+1;j<size;j++)
if(arr[i]=arr[j])
printf("%d",&arr[i]);
}
int main()
{
int arr[]={4,3,2,5,4,8,7};
int arr_size[]=sizeof(arr)/size(arr[0]);
printrepeatingelement(arr,arr_size);
getch();
}
