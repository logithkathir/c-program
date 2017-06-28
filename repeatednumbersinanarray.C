#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void findCounts(int *arr,int n)
{
inti=0;
while(i<n)
if(arr[i]<=0)
{
i++;
continue;
}
int elementIndex=arr[i]-1;
if(arr[elementIndex]>0)
{
arr[i]=arr[elementIndex];
arr[elementIndex]=-1;
}
else
{
arr[elementIndex]--
arr[i]=0;
i++
}
printf("the  repeated numbers are");
for(i=0;i<n;i++)
printf("%d->%d",i+1,abs(arr[i+1]));
return 0;
}
