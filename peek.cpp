#include<iostream>
#include<vector>
using namespace std;
int findpeek(vector<int>arr,int n)
{
if(n==0)
return -1;
if(n==1)
return arr[0];
if(arr[0]>arr[1])
return arr[0];
if(arr[n-1]>arr[n-2])
return arr[n-1];
for(int i=1;i<n;i++)
{
if(arr[i]>arr[i+1])
return arr[i];
}
}
int main()
{
    vector<int>arr={11,21,3,42,3,2,10};
    int n=arr.size();
    cout<<findpeek(arr,n);
    return 0;
}