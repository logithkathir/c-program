#include<iostream.h>
#include<bits/std.h>
using namespace std;
int findMinLength(string arr[],int n)
{
int min=INT_MAX;
for(int i=0;i<=n-1;i++)
if(arr[i].length<min)
min=arr[i].length;
return (min);
}
bool allContainsPrefix(string arr[],int n,string str,int start,int end)

{
for(i=0;i<=n-1;i++)
for(j=start;j<=end;j++)
if(arr[i][j]!=str[j])
return(false);
return(true);
}
string commonprefix(string arr[],int n)
{
int Index=findMinLength(arr,n);
string prefix;
int low=0,high=Index;
while(low<=high)
{
int mid=low+(high-low)/2;
if(allContainsPrefix(arr,n,arr[0],low,mid))
{
prefix=prefix+arr[0].substr(low,mid-low+1);
low=mid+1;
}
else
high=mid-1;
}
return(prefix);
}
int main()
{
sting arr[]={"geeks for geeks","geeks","geek","geezer"};
int n=sizeof(arr/sizeofarr1[0]);
string ans=commonprefix(arr,n)
if(ans.length())
cout<<"the longest common prefix is"<<ans;
else
cout<<"there is no longest common prefix";
return 0;
}
