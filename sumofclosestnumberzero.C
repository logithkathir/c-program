#include<stdio.h>
#include<conio.h>
#include<math.h>
int TwoElementswithminsum(int arr,int size)
int i=0;j=n-1,temp;
int positiveclosest=INT_MAX;
int negativeclosest=INT_MIN;
int p1=0,p2=0,n1=0,n2=0;
quicksort(arr,size);
while(i<j)
temp=arr[i]+arr[j];
if(temp>0)
{
if(temp<positiveclosest)
{
positiveclosest=temp;
p1=arr[i];
p2=arr[j];
}
j--;
elseif(temp<0)
{
if(temp>negativeclosest)
{
negativeclosest=temp;
n1=arr[i];
n2=arr[j];
}
i++;
}
printf("The closest sum of the numbers is%d",(arr[i]+arr[j]));
if((negativeclosest*-1<positiveclosest))
printf("%d%d",n1,n2);
else
printf("%d%d",n1,n2);
}
